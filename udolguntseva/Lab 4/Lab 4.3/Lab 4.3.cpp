#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n,i;
    double s,mas[100],e;
    int fact_n = 1;
    cout << "Введите n= ";
    cin >> n;
    cout << "введите e=  ";
    cin >> e;
    int  p = 1;
    for (i = 0; i < n; i++)
    {
        //факториал
        fact_n = 1;
        for (int k = 2; k <= p ; k++)
        {
            fact_n *= k;
        }
        //

        mas[i] = fact_n /( 3 * pow(p, p));
         p++;
    }
    s = 0;
    for (i = 0; i < n; i++)
    {
        if (mas[i]>e)
        {
            s = mas[i] + s;
        }
    }
    cout << s;

}




