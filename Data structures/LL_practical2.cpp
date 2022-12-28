#include<iostream>
#include<string.h>
using namespace std;

class Node{
    
    public:
    int rollNo;
    string name;
    Node* next;

    Node(int rn, string n){
        this->rollNo = rn;
        this->name = n;
        this->next = NULL;
    }

    
};

void insertAtBeginning(Node* &head, int rn, string n){
    Node* temp = new Node(rn, n);
    
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int rn, string n){
    Node* temp = new Node(rn, n);
    
    tail->next = temp; 
    tail = tail->next;
}

void insertAtPosition(Node* &head, Node*&tail, int position, int rn, string n){
    if(position == 1){
        insertAtBeginning(head, rn, n);
        return;
    }
    Node* temp = head;

    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp->next == NULL){
        insertAtEnd(tail, rn, n);
    } else{
        Node* temp2 = new Node(rn, n);
        temp2->next = temp->next;
        temp->next = temp2;
    }
}

void deleteNode(Node* &head, int rn){
    if(rn == 1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt=0;
        while(curr != NULL){
            if(curr->rollNo == rn){
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
            }
            prev = curr;
            curr = curr->next;
            cnt++;
        }
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->rollNo<<" "<<temp->name<<endl;
        temp = temp->next;
    }
}

void printReverse(Node* &head){
    Node* prev = NULL;
    Node* forward = NULL;
    Node* curr = head;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

int main(){
    Node* newNode = new Node(1,"Doe");

    Node* head = newNode;
    Node* tail = newNode;

    insertAtEnd(tail, 10, "Rakesh");
    insertAtEnd(tail, 13, "John");
    insertAtEnd(tail, 5, "Charles");

    cout<<"Original linked list-"<<endl;
    print(head);

    insertAtPosition(head, tail, 3, 4, "Steve");

    cout<<"\nAfter Insertion at position 3-"<<endl;
    print(head);

    deleteNode(head, 4);

    cout<<"\nAfter deletion roll no. 4 data-"<<endl;
    print(head);

    cout<<"\nAfter LL reversal-"<<endl;
    printReverse(head);
    print(head);


    return 0;
}