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
        cout<<"Enrollment ID - "<<id<<endl;
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
    }
    void outputB(){
        outputA();
        cout<<"Year of Addmission - "<<year<<endl;
        cout<<"Brach - "<<branch<<endl;
    }
};

class C : private B{
    string dob;
    
    public:
    void inputC(string a, long long int n, int y, string b, string d){
        inputB(a, n, y, b);
        dob = d;
    }
    void outputC(){
        outputB();
        cout<<"DOB - "<<dob<<endl;
    }
};

int main()
{
    C student;
    student.inputC("Ankush Singh", 4096402721, 2021, "CSE", "27-11-2002");
    student.outputC();

    return 0;
}
