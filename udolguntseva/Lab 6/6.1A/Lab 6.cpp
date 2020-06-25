#include <iostream>
using namespace std;

int faktorial(int n)
{
    int p = 1;
    for (int i = 1; i < n; i++)
    {
        p *= i;
        cout << p<<"\n";
    }
    return p;
}
int main()
{
    int s = 0;
    for (int i = 0; i <= 10; i+=2)
    {
        s += faktorial(i);
    }
    cout << s;

    system("pause");
    return 0;
}