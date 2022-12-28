#include<iostream>
#include<string.h>
using namespace std;

class Node{
    public:
    Node* prev;
    string name;
    Node* next;

    Node(string n){
        this->prev = NULL;
        this->name = n;
        this->next = NULL;
    }
};

void insertAtFront(Node* &head, string n){
    Node* temp = new Node(n); 

    head->prev = temp;
    temp->next = head;
    head = temp;
}

void deleteAtEnd(Node* &tail){
    Node* temp = tail;
    temp->prev->next = NULL;
    tail = temp->prev;
    temp->prev = NULL;
    delete temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->name<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* newNode = new Node("Employee4");
    
    Node* head = newNode;
    Node* tail = newNode;

    insertAtFront(head, "Employee3");
    insertAtFront(head, "Employee2");
    cout<<"Original List-"<<endl;
    print(head);


    cout<<"After insertion at front-"<<endl;
    insertAtFront(head, "Employee1");
    print(head);

    cout<<"After deletion at end-"<<endl;
    deleteAtEnd(tail);
    print(head);

    return 0;
}