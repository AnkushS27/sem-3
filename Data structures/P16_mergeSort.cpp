#include <iostream>

using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    int mainArrayIndex=s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    
    mainArrayIndex=mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }
    
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    
    int mid = (s+e)/2;
    
    mergeSort(arr, s, mid);
    
    mergeSort(arr, mid+1, e);
    
    merge(arr, s, e);
}

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

int main()
{
    int n = 10;
    int arr[n] = {1, 6, 3, 5, 7, 9, 12, 10, 2, 4};
    
    cout<<"Original array - "<<endl;
    print(arr, n);
    
    mergeSort(arr, 0, n-1);

    cout<<"After Sorting - "<<endl;
    print(arr, n);

    return 0;
}