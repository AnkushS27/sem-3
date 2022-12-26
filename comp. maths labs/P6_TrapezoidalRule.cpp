#include <iostream>

using namespace std;

int main()
{
    float arrx[50], arry[50], sum=0, ans=0;
    int n;
    cout<<"Enter no. of nodes : ";
    cin>>n;
    
    cout<<"Enter X : ";
    for(int i=0; i<n; i++){
        cin>>arrx[i];
    }
    
    float h = arrx[1] - arrx[0];
    
    if(arrx[1] - arrx[0] != arrx[2] - arrx[1]){
        cout<<"Data Must be Equally spaced.";
        exit(0);
    }
    
    cout<<"Enter Y : ";
    for(int i=0; i<n; i++){
        cin>>arry[i];
    }
    
    cout<<"X : ";
    for(int i=0; i<n; i++){
        cout<<arrx[i]<<" ";
    }
    cout<<endl<<"Y : ";
    for(int i=0; i<n; i++){
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    
    for(int i=1; i<n-1; i++){
        sum = arry[i] + sum;
    }
    ans = ((arry[0] + arry[n-1] + 2*sum)*h) / 2;
    
    cout<<"Ans : "<<ans;
    return 0;
}
