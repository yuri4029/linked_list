#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    // Node(int data) : data(data), next(nullptr) {}
};

/*
Node* createNode (int data){
    return new  Node(data);
}
*/

void insert_first(Node **head_ref, int new_data)
{
    Node *newNode;
    newNode = new Node(); // ham tao
    newNode->data = new_data;

    newNode->next = *head_ref;
    *head_ref = newNode;
}

void print_list(Node *head_ref)
{
    while (head_ref != nullptr)
    {
        std::cout << head_ref->data << " ";
        head_ref = head_ref->next;
    }
}

void print_list_1(Node **head_ref)
{
    Node *temp = *head_ref;

    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
}

int countNodes(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_last(Node *&head, int data)
{
    // Node* newNode = createNode(data);
    Node *newNode = new Node();
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_last_1(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;
    if (*head_ref == nullptr)
    {
        *head_ref = new_node;
        return;
    }
    Node *last = *head_ref; // Used to traverse to the end of the list
    while (last->next != nullptr)
    {
        last = last->next;
    }
    last->next = new_node;
}

void insert_at(Node **head, int pos, int new_data)
{
    Node *newNode = new Node();
    newNode->data = new_data;
    newNode->next = nullptr;

    if (pos == 0)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node *temp = *head;

    for (int i = 0; temp != nullptr && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "Position out of range" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_first(Node **head)
{
    if (head == nullptr)
    {
        cout << "Empty list" << endl;
        return;
    }

    Node *temp = *head; // nullptr
    *head = temp->next;
    delete temp;
}

void delete_from_head(Node **head, int pos)
{

    if (head == nullptr)
    {
        cout << "Empty list" << endl;
        return;
    }
    Node *temp = *head;
    for (int i = 0; temp != nullptr && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "Position out of range" << endl;
        return;
    }
    Node *next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

Node *delete_return_head(Node **head, int pos)
{

    if (head == nullptr)
    {
        cout << "Empty list" << endl;
        return *head;
    }
    // delete head
    if (pos == 0)
    {

        Node *del_first = *head;
        *head = del_first->next;
        delete del_first;

        return *head;
    }

    Node *temp = *head;
    /*
        pos [1:n]
        
    */
    for (int i = 0; temp != nullptr && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "Position out of range" << endl;
        return *head;
    }

    Node *del_node = temp->next->next;
    delete temp->next;
    temp->next = del_node;

    return *head;
}

Node *delete_from_back_return_head_(Node **head, int pos)
{

    int count = 0;
    Node *point_cnt = *head;
    while (point_cnt != nullptr)
    {
        count++;
        point_cnt = point_cnt->next;
    }

    if (head == nullptr)
    {
        cout << "Empty list" << endl;
        return *head;
    }

    if (pos == 0)
    {

        Node *del_first = *head;
        *head = del_first->next;
        delete del_first;
        return *head;
    }

    Node *temp = *head;
    for (int i = 0; temp != nullptr && i < (count - pos) - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "Position out of range" << endl;
        return *head;
    }

    Node *del_node = temp->next->next;
    delete temp->next;
    temp->next = del_node;

    return *head;
}

Node *deleteNthFromEnd(Node *head, int n)
{
    Node *fast = head, *slow = head;
    for (int i = 0; i < n; i++)
    {
        if (fast == nullptr)
            return head; // n is greater than the length of the list
        fast = fast->next;
    }

    if (fast == nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    while (fast->next != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
    }

    Node *temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    return head;
}

/*
Node* delete_return_n_th(Node** head,int pos){

    if (head == nullptr)
    {
        cout << "Empty list" << endl;
        return *head;
    }
    Node *temp = *head;
    for (int i = 0; temp != nullptr && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "Position out of range" << endl;
        return *head;
    }

    Node *del_node = temp->next->next;
    delete temp->next;
    temp->next = del_node;

    return del_node;
}
*/

int main()
{

    Node *head = nullptr;

    for (int ith = 1; ith < 11; ith++)
    {
        insert_first(&head, ith);
    }
    print_list(head);
    cout << endl;

    insert_at(&head, 3, 13);
    insert_at(&head, 1, 11);

    // print_list_1(&head);cout<<endl;

    print_list(head);
    cout << endl;
    cout << "amout:" << countNodes(head) << endl;

    delete_first(&head);
    print_list(head);
    cout << endl;
    cout << "amout:" << countNodes(head) << endl;

    // delete_from_head(&head, 1);
    cout << "delete return " << endl;
    // head = delete_return_head(&head, 0);
    // head = delete_from_back_return_head_(&head, 2);
    head = deleteNthFromEnd(head,  2);
    print_list(head);
    cout << endl;
    cout << "amout:" << countNodes(head) << endl;

    return 0;
}
