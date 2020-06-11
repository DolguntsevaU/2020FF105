#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i, j, n, m;
    cout << "Введите параметр матрицы: ","\n";
    cin >> n;
    int** M = new int* [n];
    for (i = 0; i < n; i++)
        M[i] = new int[n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            M[i][j] = 0;

    for (i = 0; i < n; i++)
    {
        m = i+1;
        for (j = 0; j < n;  j++)
        {
            if (m <= n)
            {
                M[i][j] = (m) % (n + 1);
                m++;
            }
            
        }
        
    }
            
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << M[i][j] << ' ';
        cout << endl;
    }
    for (i = 0; i < n; i++)
        delete[] M[i];
    delete[] M;
    return 0;
}


