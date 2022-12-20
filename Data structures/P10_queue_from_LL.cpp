#include<iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int d){
        this->prev = NULL;
        this->data = d;
        this->next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void push(Node* &head, Node* &tail, int d){
    Node* temp = new Node(d);

    if(head==NULL){
        head = temp;
        tail = temp;
    } else{
        temp->prev = tail;
        tail->next = temp;
        tail = temp; 
    }
}

void pop(Node* &head){
    if(head==NULL){
        cout<<"Queue is empty."<<endl;
    } else{
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    push(head, tail, 1);
    push(head, tail, 2);
    cout<<"Original:"<<endl;
    print(head);

    push(head, tail, 3);
    cout<<"After insertion:"<<endl;
    print(head);

    pop(head);
    cout<<"After deletion:"<<endl;
    print(head);
    
    return 0;
}