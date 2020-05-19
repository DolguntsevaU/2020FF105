#include <iostream>
#include <algorithm>  
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, mas[10];
    cout << "Введите количество элементов в последовательности: n= ";
    cin >> n;
    cout << "Введите последовательность из " << n << " целых чисел: " << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }

    int max = mas[0];
    int min = mas[0];

    for (int i = 1; i < n; i++)
    {
        if (max > mas[i]) 
        {
            max = mas[i];

        }

        if (min < mas[i]) 
        {
            min = mas[i];

        }

    }

    cout << "Минимальное число: " << max << endl;
    cout << "Максимальное число: " << min << endl;
    cin.get();

}

