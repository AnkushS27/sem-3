#include <iostream>

using namespace std;

int main()
{
    int arr[10], n, t;
    
    cout<<"enter size of an array: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]"<<" = ";
        cin>>arr[i];
    }
    
    cout<<"Enter the target : ";
    cin>>t;
    
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(arr[mid] == t){
            cout<<"found at "<<mid;
        } 
        if(arr[mid] < t){
            s = mid + 1;
        } else{
            e = mid - 1;
        }
        
        mid = s + (e-s)/2;
    }

    return 0;
}
