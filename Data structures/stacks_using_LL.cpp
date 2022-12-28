#include <iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    
    Node(int data){
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public: 
    Node* top = NULL;

    void push(int d){
        if(top == NULL){
            Node* temp = new Node(d);
            top = temp;
        } else{
            Node* temp = new Node(d);
            top->next = temp;
            temp->next = NULL;
            temp->prev = top;
            top = temp;
        }
    }
    void pop(){
        Node* temp = top;
        top = temp->prev;
        temp->prev = NULL;
        delete temp;
    }
    void peek(){
        cout<<"\nPeek : "<<top->data<<endl;
    }
    bool empty(){
        return (top == NULL) ? 1 : 0;
    }
    
    void print(){
        Node* temp = top;
        cout<<"Stack is - "<<endl;
        while(temp != NULL){
            cout<<"|  "<<temp->data<<"  |"<<endl;
            temp = temp->prev;
        }
        cout<<"|_____|"<<endl;
    }
};

int main(){
    Stack st;
    
    st.push(7);
    st.push(4);
    
    cout<<"Before any operation: "<<endl;
    st.print();
    
    st.push(3);
    cout<<"\nAfter Push operation: "<<endl;
    st.print();
    st.peek();
    
    st.pop();
    cout<<"\nAfter Pop operation: "<<endl;
    st.print();
    
    st.peek();
    
    return 0;
}