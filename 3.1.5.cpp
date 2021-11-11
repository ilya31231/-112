
#include <iostream>
#include <conio.h>
#include <clocale>
#include <cmath>
using namespace std;
int main ()
{
    double x,y;
    x = 1;
    
    while (x>=1 && x<=2)
    {
        y=cos(2/x) - 2*sin(1/x) + 1/x;
        cout <<"Для x = "<<x<<" Значение y = "<<y << endl;
        x = x + 0.1;
    }

return 0;
}