#include <iostream>
using namespace std;

class Complex{
  public:
  int real;
  int img;
  
  Complex(){
      real = 0;
      img = 0;
  }
  
  Complex(int r, int i){
      real = r;
      img = i;
  }
  
  void sum(Complex C1, Complex C2){
      Complex C3;
      C3.real = C1.real + C2.real;
      C3.img = C1.img + C2.img;
      cout<<"Result of A+B = "<<C3.real<<" + "<<C3.img<<"i"<<endl;
  }
  
};

int main()
{
    int real, img;
    
    cout<<"Enter real and imaginary part of first complex no.: ";
    cin>>real>>img;
    Complex C1(real,img);
    cout<<"A = "<<C1.real<<" + "<<C1.img<<"i"<<endl;
    
    cout<<"Enter real and imaginary part of second complex no.: ";
    cin>>real>>img;
    Complex C2(real,img);
    cout<<"B = "<<C2.real<<" + "<<C2.img<<"i"<<endl;
    
    Complex C3;

    C3.sum(C1, C2);
    
    return 0;
}
