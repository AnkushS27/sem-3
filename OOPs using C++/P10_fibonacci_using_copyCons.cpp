#include <iostream>
using namespace std;

class fibonacci_series{
    public:
    int f1, f2, f;
    
    fibonacci_series(){
        f1 = 0;
        f2 = 1;
        f = f1 + f2;
    }

    fibonacci_series(fibonacci_series &ptr){
        f1 = ptr.f1;
        f2 = ptr.f2;
        f = ptr.f;
    }

    void increment(){
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }

    void show(){
        cout << f <<" ";
    }
};

int main(){
    fibonacci_series number;

    int n;
    cout<<"Enter no. of terms to generate fibonacci series: ";
    cin>>n;
    
    cout<<"0 1 ";
    for (int i = 0; i < n-2; i++){
        number.show();
        number.increment();
    }

    return 0;
}