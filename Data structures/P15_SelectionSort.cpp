#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void print(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

int main(){
    vector<int> arr = {18, 17, 3, 21, 5, 19, 8};
    cout<<"Original array - "<<endl;
    print(arr, 7);

    selectionSort(arr, 7);

    cout<<"After Sorting - "<<endl;
    print(arr, 7);

    return 0;
}