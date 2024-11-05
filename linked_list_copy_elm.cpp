#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head; // head la 1 con tro nhung khong co gia tri
   
    LinkedList() {
        head = nullptr;
    }

    void insert(int newData) {
        Node* newNode = new Node();
        newNode->data = newData;
        cout<<"head :"<<head<<endl;
        newNode->next = head;
        cout<<"new node : "<< newNode->next <<endl;
        
        head = newNode;
        cout<<"data :"<<&newNode->data<<endl;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display();

    return 0;
}