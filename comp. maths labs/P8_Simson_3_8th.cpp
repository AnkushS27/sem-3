#include <iostream>

using namespace std;

int main()
{
    int n;
    double arrx[50], arry[50];
    
    cout<<"Enter no. of nodes: ";
    cin>>n;

    if((n-1)%3!=0){
        cout<<"no. of nodes-1 must be multiple of 3";
        exit(0);
    }
    
    cout<<"Enter values of x -"<<endl;
    for(int i=0; i<n; i++){
        cin>>arrx[i];
    }

    if(arrx[1] - arrx[0] != arrx[2] - arrx[1]){
        cout<<"Data Must be Equally spaced.";
        exit(0);
    }
    
    cout<<"Enter values of f(x) -"<<endl;
    for(int i=0; i<n; i++){
        cin>>arry[i];
    }
    
    double mul3 = 0, mulNOT3=0;
    for(int i=1; i<n-1; i++){
        if(i%3==0){
            mul3 = mul3 + arry[i];
        } else{
            mulNOT3 = mulNOT3 + arry[i];
        }
    }
    
    int h = arrx[1]-arrx[0];
    
    double ans = (3*h*(arry[0] + arry[n-1] + 2*mul3 + 3*mulNOT3))/8;
    
    cout<<"Ans - "<<ans;

    return 0;
}
