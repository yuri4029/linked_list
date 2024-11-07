#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

};

void insert_first(Node **head_ref)
{
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
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    
    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of range" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next 
}
int main()
{
    Node *head = nullptr;

    return 0;
}