/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float arrx[50], arry[50], sum = 0, x, n; 
    
    cout<<"Enter no. of nodes - ";
    cin>>n;
    
    cout<<"Enter values of x -"<<endl;
    for(int i=0; i<n; i++){
        cin>>arrx[i];
    }
    
    cout<<"Enter values of f(x) -"<<endl;
    for(int i=0; i<n; i++){
        cin>>arry[i];
    }
    
    cout<<"Enter value at which you want to calculate Lagrange polynnomial - ";
    cin>>x;
    
    for(int i=0; i<n; i++){
        float prod = 1;
        for(int j=0; j<n; j++){
            if(i!=j){
                prod = (x-arrx[j])/(arrx[i]-arrx[j]) * prod;
            }
        }
        prod = prod * arry[i];
        sum = prod + sum;
    }
    
    cout<<"Value of polynomial at x"<<"="<<x<<" is "<<sum;

    return 0;
}