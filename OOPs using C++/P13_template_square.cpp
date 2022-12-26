#include <iostream>

using namespace std;

template<class T>

T square(T x){
    T result;
    result = x*x;
    return result;
}

int main()
{
    int a=2, aa=square<int>(a);
    float b=4.2, bb=square<float>(b);
    double c=6.5423, cc=square<double>(c);
    
    cout<<"Square of "<<a<<" = "<<aa<<endl;
    cout<<"Square of "<<b<<" = "<<bb<<endl;
    cout<<"Square of "<<c<<" = "<<cc<<endl;

    return 0;
}

