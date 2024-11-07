#include <iostream>
using namespace std;
/*
  

*/
struct Node
{
    int data;
    Node *next;

};

void insert_first(Node** head_ref , int new_data)
{
    Node* newNode ;
    newNode = new Node();
    newNode->data = new_data;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void print_list(Node* head_ref)
{
    while (head_ref != nullptr) {
        std::cout << head_ref->data << " ";
        head_ref = head_ref->next;
    }
}

void insert_after()
{
}

void insert_end()
{
}
/*
void insertAt(int newData, int position)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != nullptr && i < position - 1; i++)
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
*/

void insertAt(int newData, int position) {
     
}
int main()
{
    Node* head = nullptr;
    insert_first(&head,9);
    insert_first(&head,8);
    insert_first(&head,7);
    print_list(head);
    return 0;
}