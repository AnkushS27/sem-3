#include <iostream>

using namespace std;

template < class T > T Swapping (T & x, T & y)
{
  T temp = x;
  x = y;
  y = temp;
  return 0;
}

int
main ()
{
  int a = 5, b=10;
  float c = 4.567, d = 8.898;
  char e = 'A', f = 'S';
  
  cout<<"Before swapping- "<<endl;
  
  cout << "a = " << a << "\nb = " << b<<endl;
  cout << "c = " << c << "\nd = " << d<<endl;
  cout << "e = " << e << "\nf = " << f<<endl;

  Swapping < int >(a, b);
  Swapping < float >(c, d);
  Swapping < char >(e, f);
  
  cout<<"\nAfter Swapping- "<<endl;

  cout << "a = " << a << "\nb = " << b<<endl;
  cout << "c = " << c << "\nd = " << d<<endl;
  cout << "e = " << e << "\nf = " << f<<endl;

  return 0;
}

