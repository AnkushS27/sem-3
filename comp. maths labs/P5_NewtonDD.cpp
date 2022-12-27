#include <iostream>

using namespace std;

int main()
{
    float x[50], y[50], p[50], k, f, f1=1, f2=0;
    int n, j=1;
    
    cout<<"Enter No. of nodes : ";
    cin>>n;
    
    cout<<"X : ";
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    
    cout<<"Y : ";
    for(int i=0; i<n; i++){
        cin>>y[i];
    }
    
    f=y[0];
    
    cout<<"Enter value at which you want to calculate value of f(x) : ";
    cin>>k;
    
    do
    {
        for (int i=0;i<n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(int i=0;i<j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[0]*f1);
        n--;
        j++;
    }
    while(n!=1);
    f+=f2;
    
    cout<<"Ans : "<<f;
    
    return 0;
}
