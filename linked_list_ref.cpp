#include<iostream>
/* remember, this is object as a node */
struct Node{
    int data;
    Node* next;

    Node (int data ) : data(data), next (nullptr){}
};


Node* createNode(int data){
    return new Node(data);
}

void insert_last(Node*& head,int data){
    Node* newNode = createNode(data);
    if(head==nullptr){
        head= newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next=newNode;
}

int main(){
    Node* list= nullptr;

}