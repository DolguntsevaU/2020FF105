#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int П, Т;
    cout << "Введите размеры матрицы:" << endl;
    cout << "П = ";
    cin >> П;
    cout << "Т = ";
    cin >> Т;
    int** A = new int* [П];
    for (int i = 0; i < П; i++)
    {
        A[i] = new int[Т];
    }
    cout << "Введите матрицу A[П][Т]:" << endl;
    for (int i = 0; i < П; i++)
    {
        for (int j = 0; j < Т; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Упорядоченная матрица A[П][Т]:" << endl;
    for (int i = 0; i < П; i++)
    {
        for (int j = 0; j < Т; j++)
        {
            sort(A[i], A[i] + Т);
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < П; i++)
    {
        delete[] A[i];
    }
    
    return 0;
}


