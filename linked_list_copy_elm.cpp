#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head; // head la 1 con tro nhung khong co gia tri

    LinkedList()
    {
        head = nullptr;
    }

    void insert(int newData)
    {
        /*
            new data is always assigned on specified memory cell.

        */

        Node *newNode = new Node();

        newNode->data = newData;
        newNode->next = head;

        head = newNode;
        
        cout << endl;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout<<endl<<temp<<" "<<&temp->data<<" "<<temp->next<<endl;
            cout << temp->data << " ";
            temp = temp->next;


        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display();

    return 0;
}