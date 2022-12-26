#include <iostream>

using namespace std;

class factorial{
    public:
    int num;

    factorial(){
        cout<<"Default Constructor called. "<<endl;
    }
    
    factorial(int num){
        int ans=1;
        if(num==0 || num==1){
            cout<<"Factorial of "<<num<<" is : "<<ans<<endl;
        } else{
            for(int i=num; i>0; i--){
                ans = ans * i;
            }
            cout<<"Factorial of "<<num<<" is : "<<ans;
        }
    }
};


int main()
{
    int n;
    cout<<"Enter a number to calculate factorial of : ";
    cin>>n;

    factorial obj(n);
    

    return 0;
}

