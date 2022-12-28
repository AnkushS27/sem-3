#include<iostream>
using namespace std;

void deleteItem(int arr[], int n, int p){
    int temp;
    temp = arr[p+1];
    for(int i=p; i<n; i++){
        arr[i] = temp;
        temp = arr[i+2]; 
    }
}

void insertItem(int arr[], int n, int p, int v){
    int temp, temp2;
    temp = arr[p];
    arr[p] = v;
    n++;
    for(int i=p+1; i<n; i++){
        temp2 = arr[i];
        arr[i] = temp;
        temp = temp2;
    }
}

void displayArr(int arr[], int n){
    cout<<"\nArray is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100], n, ip, dp, iv;
    
    cout<<"Enter the no. of elements : ";
    cin>>n;
    
    cout<<"\nEnter the elements- "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];
    }
    
    cout<<"\nOriginal array-";
    displayArr(arr, n);
    
    cout<<"\nEnter the index at which you want to insert : ";
    cin>>ip;
    cout<<"Enter the element you want to insert : ";
    cin>>iv;
    insertItem(arr, n, ip, iv);
    cout<<"\nAfter insertion-";
    displayArr(arr, n+1);
    
    cout<<"\nEnter the index at which you want to delete : ";
    cin>>dp;
    deleteItem(arr, n+1, dp);
    cout<<"\nAfter deletion-";
    displayArr(arr, n);

    return 0;
}