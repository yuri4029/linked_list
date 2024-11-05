#include <iostream>
using namespace std;
/*
    cần phải suy nghĩ theo con trỏ
    con trỏ kiểu gì
    trò đi đâu
    con trỏ lưu trữ thông tin của 2 loại ô nhớ
        - ô nhớ của chính nó
        - ô nhớ mà nó đang trỏ vào

    máy tính lưu trữ bằng ô nhớ
    bản chất của việc này là kiểm soát sự tham chiếu đến các ô nhớ

    pointer explain

    int var = 9;
    int* p;
    cout<<"var mem cell: "<<&var <<endl;

    cout<<endl<<"before assign"<<endl;
    cout<<"mem cell that pointer is pointing :"<<p<<endl;
    cout<<"value of pointer :"<<*p<<endl;
    cout<<"mem cell of pointer itself :"<<&p<<endl;

    p=&var;

    cout<<endl<<"after assign"<<endl;
    cout<<"mem cell that pointer is pointing :"<<p<<endl;
    cout<<"value of pointer :"<<*p<<endl;
    cout<<"mem cell of pointer itself :"<<&p<<endl;

*/
struct Node
{
    int data;
    Node *next;

    /*
        | data | pointer |
        linked list sẽ cần 1 con trỏ là header,
        header sẽ định nghĩa phần tử đầu tiên của list

        khi thêm 1 phần tử vào đầu linked list thì
        - phần tử mới trỏ đến head
        - copy head sang phần tử mới

        head -> null

        add node 1 :

        node_1->head->null
        head = node_1

        head->null
        node_1->null

        add node 2 :
        node_2->head( node_1 info)
        head = node_2

     */
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