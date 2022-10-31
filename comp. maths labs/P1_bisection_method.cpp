#include<iostream>
 
using namespace std;
 
//function used is x^3-4x+-9
double func(double x)
{
    return x*x*x - 4*x - 9;
}


int count = 0; 

double c;
 
void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        cout<<"Incorrect a and b";
        exit(0);
    }
 
    c=a;
 
    while ((b-a) >= 0.0001)
    {
        c = (a+b)/2;
        if (func(c) == 0.0){
            break;
        }
        else if (func(c)*func(a) < 0){
            b=c;
        }
        else{
            a=c;
        }
        count++;
        cout<<"Iteration no. "<<count<<"     "<<"x"<<count<<" = "<<c<<" and f(x"<<count<<") = "<<func(c)<<endl;
    }
}
 
int main()
{
    double a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"a = "<<a<<"  "<<"b = "<<b<<endl<<endl;
    bisection(a,b); 
    cout<<"\n";
    cout<<"The value of root is = "<<c<<endl;
 
    return 0;
}
