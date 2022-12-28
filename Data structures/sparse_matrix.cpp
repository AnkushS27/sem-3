#include<iostream>
using namespace std;

int main(){
    int arr[100][100], r, c;

    cout<<"Enter no. of rows and columns: ";
    cin>>r>>c;

    cout<<"Enter elements of an array- "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"Arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }

    cout<<"Array is"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Sparse matrix in 3-tuple form-"<<endl;
    cout<<"Row Col Value"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] != 0){
                cout<<i<<"   "<<j<<"   "<<arr[i][j]<<endl;
            }
        }
    }

    return 0;
}