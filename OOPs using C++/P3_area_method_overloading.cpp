#include <iostream>
#include <math.h>
using namespace std;

class areaCalc{
    public:
    void area(float r){
    cout << "\n Area of Circle= " << 3.14 * r * r << " sq. units";
    }

    void area(int l, int b){
    cout << "\n Area of Rectangle= " << l * b << " sq. units";
    }

    void area(float a, float b, float c){
    float s, ar;
    s = (a + b + c) / 2;
    ar = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "\n Area of Triangle= " << ar << " sq. units";
    }
};

int main(){
    areaCalc obj;

    int r, l, b, a, c;
    cout << "\n Choose your option to calculate area for:\n";
    cout << " 1- Rectangle\n 2- Circle\n 3- Triangle";
    cout << "\n Enter your choice : ";
    cin >> c;

    switch (c)
    {
    case 1:
        cout << "\n Enter Length and Breadth of rectangle: ";
        cin >> l >> b;
        obj.area(l, b);
        break;
    case 2:
        cout << "\n Enter the Radious of circle: ";
        cin >> r;
        obj.area(r);
        break;
    case 3:
        cout << "\n Enter  the three sides of triangle: ";
        cin >> a >> b >> c;
        obj.area(a, b, c);
        break;
    default:
        cout << "invalid choice";
    }
}