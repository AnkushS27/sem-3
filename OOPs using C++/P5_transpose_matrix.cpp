#include <iostream>
using namespace std;

class matrix{
    public: 
    int a[10][10], b[10][10], r1, c1;
    
    void input(){
        cout<<"Enter the no. of row: ";
        cin>>r1;
        cout<<"Enter the no. of columns: ";
        cin>>c1;
        
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                cout<<"Enter the value for ["<<i<<"]["<<j<<"]= ";
                cin>>a[i][j];
            }
        }
    }
    
    void display(){
        cout<<"Matrix is:"<<endl;
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    
    void transpose(){
        for(int i=0; i<c1; i++){
            for(int j=0; j<r1; j++){
                b[i][j] = a[j][i]; 
            }
        }
    }
    
    void result(){
        cout<<"Transpose is:"<<endl;
        for(int i=0; i<c1; i++){
            for(int j=0; j<r1; j++){
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};

int main()
{
    matrix obj;
    obj.input();
    obj.display();
    obj.transpose();
    obj.result();

    return 0;
}