#include <iostream>

using namespace std;

class matrix{
    public: 
    int a[10][10], b[10][10], R[10][10], r, c;
    
    void input(){
        cout<<"Enter the no. of rows: ";
        cin>>r;
        cout<<"Enter the no. of columns: ";
        cin>>c;
        
        cout<<"Enter Matrix A"<<endl;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<"Enter the value for ["<<i<<"]["<<j<<"]= ";
                cin>>a[i][j];
            }
        }
        
        cout<<"Enter Matrix B"<<endl;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<"Enter the value for ["<<i<<"]["<<j<<"]= ";
                cin>>b[i][j];
            }
        }
    }
    
    void display(){
        cout<<"Matrix A:"<<endl;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        
        cout<<"Matrix B:"<<endl;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    
    void addition(){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                R[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    
    void result(){
        cout<<"A + B is:"<<endl;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<R[i][j]<<"\t";
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
    obj.addition();
    obj.result();

    return 0;
}