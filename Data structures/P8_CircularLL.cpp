#include<iostream>
#include<string.h>
using namespace std;

class Node{
    public:
    Node* prev;
    string cName;
    Node* next;

    Node(string c){
        this->prev = NULL;
        this->cName = c;
        this->next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void insertAtFront(Node* &head, Node* &tail, string c){
    Node* temp = new Node(c);
    
    if(head==NULL){
        temp->next = temp;
        temp->prev = temp;
        head = temp;
        tail = temp;
    } else{  
        temp->next = head;
        temp->prev = tail;
        head->prev = temp;
        tail->next = temp;
        head = temp;
    }
}

void deleteAtEnd(Node* &head, Node* &tail){
    Node* temp = tail;
    temp->prev->next = head;
    head->prev = temp->prev;
    tail = temp->prev;
    temp->prev = NULL;
    temp->next = NULL;
    delete temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp->next!=head){
        cout<<temp->cName<<endl;
        temp = temp->next;
    }
    cout<<temp->cName;
}

int main(){

    insertAtFront(head, tail, "MSIT");
    insertAtFront(head, tail, "VIPS");
    insertAtFront(head, tail, "USICT");
    cout<<"Original: "<<endl;
    print(head);
    cout<<endl<<endl;

    insertAtFront(head, tail, "MAIT");
    cout<<"After insertion at front: "<<endl;
    print(head);
    cout<<endl<<endl;

    deleteAtEnd(head, tail);
    cout<<"After deletion at end: "<<endl;
    print(head);

    return 0;
}
