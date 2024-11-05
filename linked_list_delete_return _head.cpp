#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

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
    temp->next = newNode;
}

Node* deleteNthFromEnd(Node* head, int n) {
    Node *fast = head, *slow = head;
    for (int i = 0; i < n; i++) {
        if (fast == nullptr) return head; // n is greater than the length of the list
        fast = fast->next;
    }

    if (fast == nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    while (fast->next != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }

    Node* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    return head;
}

void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertAt(10, 0);
    insertAt(20, 1);
    insertAt(30, 2);
    insertAt(15, 1); // Insert 15 at position 1

    cout << "List before deletion: ";
    display();

    head = deleteNthFromEnd(head, 2); // Delete 2nd node from end

    cout << "List after deletion: ";
    display();

    return 0;
}
