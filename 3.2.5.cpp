#include <cstdlib>
#include <iostream>
#include <ctime>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    int q;
    cout << "Если нужно заполненить массив случайными числами, введи 1 " << endl << "Если надo заполнить массив вводом с клавиатуры, введи 2" << endl;
    cin >> q;
    if (q == 1)
    {
    
    
    int x, y;
    cin >> x >> y;
    int a[x][y];
    
    srand(time(NULL));
    
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            a[i][j] = rand() ; 
            
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
    
    for (int i = 0; i < x; i++)
    {
        int max = 0;
        for (int j = 0; j < y; j++)
            if (a[i][j] > a[i][max])
                max = j;
        a[i][max] *= -1;
    }
    cout << endl << endl;
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
        
    }
    
    else
    {
        int x, y;
    cin >> x >> y;
    int a[x][y];
    
    srand(time(NULL));
    
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> a[i][j] ; 
            
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
    
    for (int i = 0; i < x; i++)
    {
        int max = 0;
        for (int j = 0; j < y; j++)
            if (a[i][j] > a[i][max])
                max = j;
        a[i][max] *= -1;
    }
    cout << endl << endl;
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
    }

    return EXIT_SUCCESS;
    
    
    
}
