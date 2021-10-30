#include <cstdlib>
#include <iostream>
#include <ctime>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    int q;
    cout << "Если нужно заполненить массив случайными числами, введи 1 " << endl << "Если надo заполнить массив вводом с клавиатуры, введи 2" << endl;
    cin >> q;
    cout << "Елси нужен 2-й пункт, то введи 2" << endl;
    int k;
    cin >> k;
    if (q == 1)
    {
    
    
    int x, y, q, w;
	cout << "Введите размеры массива" << endl;
    cin >> x >> y; //Вводится размеры массива
    int a[x][y];
	int v[x][y];
    
    srand(time(NULL));
    cout << "Вот ваш массив" << endl;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
			{
				a[i][j] = rand() ; //заполяем массив рандомными элементами
				v[i][j] = a[i][j];
			}
		

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

	cout << endl;
	
    cout << "После выполнения пункта 1 массив стал выглядить вот так:" << endl;
    for (int i = 0; i < x; i++)
    {
        int max = 0;
        for (int j = 0; j < y; j++)
            if (a[i][j] > a[i][max])
                max = j; //находим максимальный элемент в строке
        a[i][max] *= 0; //заменяем элемент на 0
    }

		
	for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

		
    cout << endl << endl;

		
    if (k == 2) //проверяем, нужен ли пункт 2 
    {
	cout << "После выполнения 2-го пункта, массив выглядит вот так:" << endl;	
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int f = j;
            int ff = 0;
            if(v[i][0] % 3 == 0 && f == 0 && v[f][0] != 0)
            {
				
                for (int mm = 0; mm < y; mm++)
                {
                    cout << "0" << " ";// Вставляем перед всеми строками, первый элемент которых делится на 3, строку
					
                }
            }
            if(v[i][0] % 3 == 0 && f == 0 && v[f][0] != 0)
            {
                cout << endl;
            }
			
            cout << v[i][j] << "  ";
            ff += 1;
        }
        cout << endl;
    }
    }
    
        
    }
    
    else
    {
    int x, y, q, w;
	cout << "Введите размеры массива" << endl;
    cin >> x >> y; //Вводится размеры массива
    int a[x][y];
	int v[x][y];
    
    srand(time(NULL));
    cout << "Заполните массив вводос с клавиатуры" << endl;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
			{
				
				cin >> a[i][j] ; //вводим массив с клавиатуры
				v[i][j] = a[i][j];
			}
	cout << "Вот ваш массив" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

	cout << endl;
	
    cout << "После выполнения пункта 1 массив стал выглядить вот так:" << endl;
    for (int i = 0; i < x; i++)
    {
        int max = 0;
        for (int j = 0; j < y; j++)
            if (a[i][j] > a[i][max])
                max = j; //находим максимальный элемент в строке
        a[i][max] *= 0; //заменяем элемент на 0
    }

		
	for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

		
    cout << endl << endl;

		
    if (k == 2) //проверяем, нужен ли пункт 2 
    {
	cout << "После выполнения 2-го пункта, массив выглядит вот так:" << endl;	
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int f = j;
            int ff = 0;
            if(v[i][0] % 3 == 0 && f == 0 && v[f][0] != 0)
            {
				
                for (int mm = 0; mm < y; mm++)
                {
                    cout << "0" << " ";// Вставляем перед всеми строками, первый элемент которых делится на 3, строку
					
                }
            }
            if(v[i][0] % 3 == 0 && f == 0 && v[f][0] != 0)
            {
                cout << endl;
            }
			
            cout << v[i][j] << "  ";
            ff += 1;
        }
        cout << endl;
    }
    }
    }

    return EXIT_SUCCESS;
}
