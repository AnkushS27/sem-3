#include<iostream>
using namespace std;

class Power{
    public: //access specifier
    double m;
    int n;
    double ans=1;

    void input(){
        cout<<"Enter the number: ";
        cin>>m;
        cout<<"Enter the power: ";
        cin>>n;
    }

    void raiseToPower(){
        for(int i=0; i<n; i++){
            ans = ans * m;
        }
    }

    void displayResult(){
        cout<<"Result of "<<m<<"^"<<n<<" = "<<ans<<endl;
    }
};

int main(){
    Power obj;
    obj.input();
    obj.raiseToPower();
    obj.displayResult();

    return 0;
}