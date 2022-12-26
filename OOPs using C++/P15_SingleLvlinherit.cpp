#include <iostream>

using namespace std;

class A{
    string name;
    long long int id;
    
    public:
    void inputA(string a, long long int n){
        name = a;
        id = n;
    }
    void outputA(){
        cout<<"Name - "<<name<<endl;
        cout<<"Enroll ID - "<<id<<endl;
    }
};

class B : private A{
    int year;
    string branch;
    
    public:
    
    void inputB(string a, long long int n, int y, string b){
        inputA(a, n);
        year = y;
        branch = b;
    };
    void outputB(){
        outputA();
        cout<<"Year of Addmission - "<<year<<endl;
        cout<<"Brach - "<<branch<<endl;
    };
};

int main()
{
    B student;
    student.inputB("Ankush Singh", 4096402721, 2021, "CSE");
    student.outputB();

    return 0;
}
