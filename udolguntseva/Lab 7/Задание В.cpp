#include <iostream>
#include <algorithm>  
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int t, n, i, mas[10];
    cout << "Введите искомое число: ";
    cin >> t;
    cout << "Введите колличество эллементов числовой последовательности: ";
    cin >> n;
    cout << "Введите эллементы последовательности " << '\n';
    for (i = 1; i <= n; i++)
    {
        cin >> mas[i];
    }
    t = t * t;
    for (i = 1; i <= n; i++)
    {
        if (mas[i] == t)
        {
            cout << "Квадратом данного числа является: ";
            cout << mas[i];
        }
    }
    return 0;
}

   
    

    









    
