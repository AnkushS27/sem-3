#include <iostream>

using namespace std;

int main()
{
    int n;
    float arrx[50], arry[50];
    
    cout<<"Enter no. of nodes: ";
    cin>>n;
    
    if((n-1)%2!=0){
        cout<<"no. of nodes must be odd";
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
    
    float even = 0, odd=0;
    for(int i=1; i<n-1; i++){
        if(i%2==0){
            even = even + arry[i];
        } else{
            odd = odd + arry[i];
        }
    }
    
    int h = arrx[1]-arrx[0];
    
    float ans = (h*(arry[0] + arry[n-1] + 2*even + 4*odd))/3;
    
    cout<<"Ans - "<<ans;

    return 0;
}
