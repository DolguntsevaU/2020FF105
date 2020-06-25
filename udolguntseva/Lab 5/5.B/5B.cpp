#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, k, i, t,p;
    cout << "Введите целое число n= ";
    cin >> n;
   
    for (i = 2; i < n; i++)
    {
        t = 0;
        for (k = 2; k < n; k++)
        {
            p = i % k;
            if (p == 0)
            {
                t = t + 1;
               
            }
        }
        if (t == 1)
        {
            cout << i;
        }
    }
}
   
