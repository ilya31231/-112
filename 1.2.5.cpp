
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   
    double a;
    double b;
    
    
    cout << "Введите значение веса в граммах" << endl;
    cin >> a;
    
    if (a/a == 1 && a >= 0)
    {
        cout << "b=" << a/28.3 << endl;
    }
    else
    {
        cout << "Ты меня сломал, деньги можно перевести на карту";
    }
    
    
    return 0;
}
