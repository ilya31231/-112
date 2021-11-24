#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
 
using namespace std;


int f1( int width, int lengths, int punkt)
{
    int array1[width][lengths]; //создаётся массив
	int array2[width][lengths]; //создаётся массив
    
    srand(time(NULL));
    cout << "Вот ваш массив" << endl;
    for (int i = 0; i < width; i++)
        for (int j = 0; j < lengths; j++)
			{
				array1[i][j] = rand() ; //заполяем массив рандомными элементами
				array2[i][j] = array1[i][j]; //копируем 1-й массив во второй
			}
		

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lengths; j++)
            cout << array1[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

	cout << endl;
	
    cout << "После выполнения пункта 1 массив стал выглядить вот так:" << endl;
    for (int i = 0; i < width; i++)
    {
        int max = 0;
        for (int j = 0; j < lengths; j++)
            if (array1[i][j] > array1[i][max])
                max = j; //находим максимальный элемент в строке
        array1[i][max] *= 0; //заменяем элемент на 0
    }

		
	for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lengths; j++)
            cout << array1[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

		
    cout << endl << endl;
    if (punkt == 2) //проверяем, нужен ли пункт 2 
    {
	cout << "После выполнения 2-го пункта, массив выглядит вот так:" << endl;	
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lengths; j++)
        {
            int f = j;
            int ff = 0;
            if(array2[i][0] % 3 == 0 && f == 0 && array2[f][0] != 0)
            {
				
                for (int mm = 0; mm < lengths; mm++)
                {
                    cout << "0" << " ";// Вставляем перед всеми строками, первый элемент которых делится на 3, строку
					
                }
            }
            if(array2[i][0] % 3 == 0 && f == 0 && array2[f][0] != 0)
            {
                cout << endl;
            }
			
            cout << array2[i][j] << "  "; //выводит 2-й массив
            ff += 1;
        }
        cout << endl;
    }
    }
}

int f2( int width, int lengths, int punkt2)
 {
    int array1[width][lengths]; //создаётся массив
	int array2[width][lengths]; //создаётся массив
    
    srand(time(NULL));
    cout << "Заполните массив вводос с клавиатуры" << endl;
    for (int i = 0; i < width; i++)
        for (int j = 0; j < lengths; j++)
			{
				
				cin >> array1[i][j] ; //вводим массив с клавиатуры
				array2[i][j] = array1[i][j]; //копируем 1-й массив во второй
			}
	cout << "Вот ваш массив" << endl;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lengths; j++)
            cout << array1[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

	cout << endl;
	
    cout << "После выполнения пункта 1 массив стал выглядить вот так:" << endl;
    for (int i = 0; i < width; i++)
    {
        int max = 0;
        for (int j = 0; j < lengths; j++)
            if (array1[i][j] > array1[i][max])
                max = j; //находим максимальный элемент в строке
        array1[i][max] *= 0; //заменяем элемент на 0
    }

		
	for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lengths; j++)
            cout << array1[i][j] << "  "; //выводим массив
        cout << endl;
		
    }

		
    cout << endl << endl;

		
    if (punkt2 == 2) //проверяем, нужен ли пункт 2 
    {
	cout << "После выполнения 2-го пункта, массив выглядит вот так:" << endl;	
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lengths; j++)
        {
            int f = j;
            int ff = 0;
            if(array2[i][0] % 3 == 0 && f == 0 && array2[f][0] != 0)
            {
				
                for (int mm = 0; mm < lengths; mm++)
                {
                    cout << "0" << " ";// Вставляем перед всеми строками, первый элемент которых делится на 3, строкух 
					
                }
            }
            if(array2[i][0] % 3 == 0 && f == 0 && array2[f][0] != 0)
            {
                cout << endl;
            }
			
            cout << array2[i][j] << "  ";
            ff += 1;
        }
        cout << endl;
    }
    }
 }
 
 
int main(int argc, char *argv[])
{
    int punkt1;
    cout << "Если нужно заполненить массив случайными числами, введи 1 " << endl << "Если надo заполнить массив вводом с клавиатуры, введи 2" << endl;
    cin >> punkt1;
    cout << "Елси нужен 2-й пункт, то введи 2" << endl;
    int punkt2;
    cin >> punkt2;
    int width, lengths, q, w;
	cout << "Введите ширину массива" << endl;
    cin >> width; //Вводится размеры массива
    cout << "Введите длинну массива" << endl;
    cin >> lengths; //Вводится размеры массива
    if (punkt1 == 1)
    {
        f1(width, lengths, punkt2); //вызываем 1-ю функцию
    }
    else
    {
        f2(width, lengths, punkt2); //вызываем 2-ю функцию
    }
    
    return EXIT_SUCCESS;
}
