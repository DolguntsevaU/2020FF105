#include <iostream>
using namespace std;

//Тут число "разворачивается"
int reverse (int c)
{
    int n = 0;
    while (c>0)
    {
        n = 10 * n + c % 10;
        c /= 10;
    }

    return n;
}


int main()
{
    setlocale(0, "rus");
    int c;
    cout << "Введите число ";
    cin >> c;
    if (c == reverse(c))
    {
        cout << c << " Это палиндром" << endl;
    }
    else
    {
        cout << "Это не палиндром " << endl;
    }
    system("Pause");
    return 0;
}
