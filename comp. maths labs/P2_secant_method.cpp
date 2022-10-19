//secant method

#include<iostream>
#include<iomanip>
#include<math.h>

float f(float x){
    return x*x*x - 2*x - 5;
}    

using namespace std;

int main()
{
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1, N, count = 2;
	 
	 /* Setting precision and writing floating point values in fixed-point notation. */
   cout<< setprecision(6)<< fixed;

	 /* Inputs */
	 cout<<"Enter x0 and x1: ";
	 cin>>x0>>x1;
	 cout<<"Enter tolerable error: ";
	 cin>>e;
	 cout<<"Enter maximum iteration: ";
	 cin>>N;

	 do
	 {
		  f0 = f(x0);
		  f1 = f(x1);
		  if(f0 == f1)
		  {
			   cout<<"Mathematical Error.";
			   exit(0);
		  }

		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);

		  cout<<"Iteration-"<< step<<":\t x"<<count<<" = "<< setw(10)<< x2<<" and f(x"<<count<<") = "<< setw(10)<< f(x2)<< endl;

		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;

		  step++;
          count++;

		  if(step > N)
		  {
			   cout<<"Not Convergent.";
			   exit(0);
		  }
	 }while(fabs(f2)>e);

	 cout<< endl<<"Root is: "<< x2;

	 return 0;
}
