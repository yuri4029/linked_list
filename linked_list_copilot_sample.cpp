#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning
void insertAtBeginning(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to insert a new node after a given node
void insertAfter(Node* prev_node, int new_data) {
    if (prev_node == nullptr) {
        std::cout << "The given previous node cannot be null";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Function to append a new node at the end
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    
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

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = nullptr;
    
    append(&head, 6);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 1);
    append(&head, 4);
    insertAfter(head->next, 8);
    
    std::cout << "Created Linked list is: ";
    printList(head);
    
    return 0;
}
