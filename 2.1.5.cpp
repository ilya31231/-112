
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double P;
    double S;
    
    cout << "Введи стороны прямоугольника" << endl;
    cin >> a >> b;
    
    if (a/a == 1 && a >= 0)
    {
        if (b/b == 1 && b >= 0)
        {
            c = sqrt(a*a + b*b);
            P = a+a+b+b;
            S = a*b;
            cout << "Диагональ =" << c << endl;
            cout << "Периметр =" << P << endl;
            cout << "Площадь =" << S << endl;
        }
        else
        {
            cout << "Ты меня сломал, деньги за ремонт можешь перевести на карту"<< endl;
            
        }
    
    }
    else
    {
        cout << "Ты меня сломал, деньги за ремонт можешь перевести на карту"<< endl;
    }
    

    return 0;
}
