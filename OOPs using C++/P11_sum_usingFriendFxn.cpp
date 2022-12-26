#include <iostream>

using namespace std;

class Second;
class First{
    private:
    int num1;
    
    public:
    void input(){
        cout<<"Enter first no. : ";
        cin>>num1;
    }
    
    friend void sum(First, Second);
};

class Second{
    private:
    int num2;
    
    public:
    void input(){
        cout<<"Enter Second no. : ";
        cin>>num2;
    }
    
    friend void sum(First, Second);
};

void sum(First n1, Second n2){
    cout<<"Sum is "<<n1.num1 + n2.num2;
}

int main()
{
    First n1;
    Second n2;
    
    n1.input();
    n2.input();
    
    sum(n1, n2);

    return 0;
}