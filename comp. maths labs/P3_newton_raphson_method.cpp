//newton raphson method

#include <iostream>
#include <math.h>
using namespace std;

float f(float x){
    return (x*x*x - 4*x -9);
}

float df(float x){
    return 3*x*x - 4;
}

int main()
{
    float x0, x1, err, maxitr, temp;
    
    cout<<"Enter x0 = ";
    cin>>x0;
    cout<<"Allowed error = ";
    cin>>err;
    cout<<"Maximum no. of iterations = ";
    cin>>maxitr;
    
    int i = 1;

    do{
        x1 = x0 - f(x0)/df(x0);
        cout<<"x"<<i++<<" = "<<x1<<endl;
        
        x0 = x1;
        temp = f(x1); 
    } while(abs(temp)>err);
    
    cout<<"root is "<<x1;
    
    return 0;
}
