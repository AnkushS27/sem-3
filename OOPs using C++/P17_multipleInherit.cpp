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
    string dob;
    
    public:
    
    void inputB(string a, long long int n, int y, string b, string d){
        inputA(a, n);
        year = y;
        branch = b;
        dob = d;
    }
    void outputB(){
        outputA();
        cout<<"Year of Addmission - "<<year<<endl;
        cout<<"Brach - "<<branch<<endl;
        cout<<"DOB - "<<dob<<endl;
    }
};

class C : private A{
    int year;
    string branch;
    string dob;
    
    public:
    void inputC(string a, long long int n, int y, string b, string d){
        inputA(a, n);
        year = y;
        branch = b;
        dob = d;
    }
    void outputC(){
        outputA();
        cout<<"Year of Addmission - "<<year<<endl;
        cout<<"Brach - "<<branch<<endl;
        cout<<"DOB - "<<dob<<endl;
    }
};

int main()
{
    B student1;
    C student2;
    
    student1.inputB("Ankush Singh", 4096402721, 2021, "CSE", "27-11-2002");
    student1.outputB();

    cout<<endl;
    
    student2.inputC("John Doe", 8796402721, 2020, "IT", "22-05-2002");
    student2.outputC();

    return 0;
}
