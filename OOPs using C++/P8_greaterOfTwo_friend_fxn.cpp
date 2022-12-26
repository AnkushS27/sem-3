#include <iostream>
using namespace std;

class Second;
class First{
    private:
    int x;
    
    public:
    void input(){
        cout<<"Enter first no.: ";
        cin>>x;
    }
    friend void check(First, Second);
};

class Second{
    private:
    int y;
    
    public:
    void input(){
        cout<<"Enter second no.: ";
        cin>>y;
    }
    
    friend void check(First, Second);
};

void check(First n1, Second n2){
    if(n1.x>n2.y){
        cout<<"Greater of two is: "<<n1.x;
    } else {
        cout<<"Greater of two is: "<<n2.y;
    }
}

int main()
{
    First num1;
    Second num2;
    
    num1.input();
    num2.input();
    
    check(num1, num2);

    return 0;
}