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
    double t1;
    double t2;
    double t3;
    double v1;
    double v2;
    double v3;
    double s;
    double a;
    double b1;
    double b2;
    double b3;
    double b4;
    
    
    cout << "Введи t1" << endl;
    cin >> t1;
    
    if (t1/t1 == 1 && t1 >= 0)
    {
        cout << "Введи t2" << endl;
        cin >> t2;

        if (t2/t2 == 1 && t2 >= 0)
        {
            cout << "Введи t3" << endl;
            cin >> t3;
            
            if (t3/t3 == 1 && t3 >= 0)
            {
                cout << "Введи v1" << endl;
                cin >> v1;
                
                if (v1/v1 == 1 && v1 >= 0)
                {
                    cout << "Введи v2" << endl;
                    cin >> v2;
                    
                    if (v2/v2 == 1 && v2 >= 0)
                    {
                        cout << "Введи v3" << endl;
                        cin >> v3;
                        
                        if (v3/v3 == 1 && v3 >= 0)
                        {
                            
                            s = t1*v1 + t2*v2 + t3*v3;
                            a = s/2;
                            
                            if (t1*v1 < a)
                            {
                                if (t1*v1+t2*v2 < a)
                                {
                                    b3 =t1 + t2 + (a-t1*v1-t2*v2)/v3;
                                    cout << b3;
                                    
                                }
                                else
                                {
                                    b2 =t1 + (a-t1*v1)/v2;
                                    cout << b2;
                                }
                                
                            }
                            else
                            {
                                b1 = a/v1;
                                cout << b1;
                            }
                            
                            
                            
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
