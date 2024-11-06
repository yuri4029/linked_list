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
    Node* temp = *head_ref; 
    
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
}

int countNodes(Node* head){
    int count =0;
    Node* temp = head;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}


void insert_last(Node *&head, int data)
{
    //Node* newNode = createNode(data);
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
    if (*head_ref == nullptr) {
        *head_ref = new_node;
        return;
    }
    Node *last = *head_ref; // Used to traverse to the end of the list
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;
}

void insert_at(Node** head,int pos, int new_data){
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = nullptr;

    if (pos==0){
        newNode->next = *head;
        *head= newNode;
        return;
    }

    Node* temp = *head;

    

    for (int i = 0; temp != nullptr && i < pos - 1; i++) {
        temp = temp->next;
         //cout<<temp->data<<endl;
         //cout<<i<<endl;
    }
    if (temp == nullptr) {
        cout << "Position out of range" << endl;
        return;
    } 
    
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{

    Node *head = nullptr;
    
    
    insert_at(&head,0,4);
    insert_first(&head, 3);
    insert_first(&head, 2);
    insert_first(&head, 1);

    print_list(head);cout<<endl;

    insert_at(&head,3,13);
    insert_at(&head,1,11);

    //print_list_1(&head);cout<<endl;
    

    print_list(head);cout<<endl;
    cout<<"amout:"<<countNodes(head);

    return 0;
}
