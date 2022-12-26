#include <iostream>

using namespace std;

class matrix{
    public: //Access Modifier
    int a[10][10], b[10][10], c[10][10], r1, C1, r2, C2, i, j, k, sum;
    
    void input(){
        cout<<"Enter the number of rows for first matrix: ";
        cin>>r1;
        cout<<"Enter the number of columns for first matrix: ";
        cin>>C1;
        cout<<"Enter the elements for first matrix: "<<endl;
        for(i=0; i<r1; i++){
            for(j=0; j<C1; j++){
                cout<<"Enter the value for ["<<i<<"]["<<j<<"]:";
                cin>>a[i][j];
            }
        }
        cout<<"Enter the number of rows for second matrix: ";
        cin>>r2;
        cout<<"Enter the number of columns for second matrix: ";
        cin>>C2;
        cout<<"Enter the elements for Second matrix: "<<endl;
        for(i=0; i<r2; i++){
            for(j=0; j<C2; j++){
                cout<<"Enter the value for ["<<i<<"]["<<j<<"]:";
                cin>>b[i][j];
            }
        }
    }
    
    void display(){
        cout<<"The First matrix: "<<endl;
        for(i=0; i<r1; i++){
            for(j=0; j<C1; j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"The Second matrix: "<<endl;
        for(i=0; i<r2; i++){
            for(j=0; j<C2; j++){
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    
    void multiply(){
        if(C1==r2) {
            for(i=0; i<r1; i++){
                for (j=0; j<C2; j++){
                    sum = 0;
                    for(k=0; k<r2; k++){
                        sum = sum + (a[i][k] * b[k][j]);
                        c[i][j] = sum;
                    }
                }
            }
        } else {
            cout<<"Sorry multiplication not possible.";
        }
    }
    
    void displayMultiplication(){
        cout<<"Result is: "<<endl;
        for(i=0; i<r1; i++){
            for(j=0; j<C2; j++){
                cout<<c[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    matrix obj;
    obj.input();
    obj.display();
    obj.multiply();
    obj.displayMultiplication();
    return 0;
}