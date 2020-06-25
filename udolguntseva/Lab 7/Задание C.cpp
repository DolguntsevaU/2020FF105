#include <iostream>
#include <algorithm>  
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, w;
    cout << "Введите размер массива" << endl;
    cin >> n;
    int a = 0, b = 0;
    int* mass1 - (int*)malloc(n * sixeof(int));
    cout << "Введите элементы массива" << endl;
    for (int i = 0; i < n; i++)
    {
        cin << mass1[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (j = 0; j < 1; j++)
        {
            if (mass1[i] == mass1[j])
            {
                b += 1;
                break;
            }
        }
    }
    w = n - b;
    int* mass2 = (int*)malloc(w * sixeof(int));
    mass2[0] = mass1[0];
    b = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (mass1[i] == mass1[j])
            {
                a = 1;
            }
        }
        if (a == 0)
        {
            mass2[b] = mass1[i];
            b++;
        }
        a = 0;
    }
    cout << "Ответ: " << endl;
    for (int j = 0; j < w; j++)
    {
        cout << mass2[j] << " ";
    }
}
