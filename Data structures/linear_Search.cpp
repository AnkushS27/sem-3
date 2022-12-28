#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, t;
    
    cout<<"enter size of an array: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]"<<" = ";
        cin>>arr[i];
    }
    
    cout<<"Enter the target : ";
    cin>>t;
    
    for(int i=0; i<n; i++){
        if(arr[i]==t){
            cout<<"found at index = "<<i<<endl;
        }
    }
    
    return 0;
}
