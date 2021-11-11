
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = -2.9;
    double y = 15.5;
    double z = 1.5;
    double a;
    double b;
    
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;
    
    a = sqrt(x*x + y) - y*y*sin((x + z)/x)*sin((x + z)/x)*sin((x + z)/x);
    b = cos(x*x*x)*cos(x*x*x) - (x/(sqrt(z*z + y*y)));
    
    
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    
    
    return 0;
}
