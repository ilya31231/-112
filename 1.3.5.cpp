/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t = 20;
    double I;
    double U;
    double A;
    
    cout << "Введи силу тока в цепи"<< endl;
    cin >> I;
    cout << "Введи напряжение"<< endl;
    cin >> U;
    
    
    
    if (I/I == 1)
    {
         if (U/U == 1)
         {
              A = I*U*t*60;
              cout<< "работа совершённая электрическим током в электродвигателе равна " << A << " " <<"Дж ";
         }
         
          else
          {
              cout << "Ты меня сломал, деньги можно перевести на карту";
              
          }
    }
    
    else
    {
        cout << "Ты меня сломал, деньги можно перевести на карту";
    }
    
    
    return 0;
}
