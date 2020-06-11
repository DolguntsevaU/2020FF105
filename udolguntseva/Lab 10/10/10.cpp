#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c = 0.0;
	cout << "Введите делимое: ";
	cin >> a;
	cout << "Введите делитель: ";
	cin >> b;
	if (b == 0)
	{
		cout << "На 0 делить нельзя!" << endl;
		return 1;
	}
	c = a / b;
	cout << "Частное равно: " << c << endl;
	return 0;
}


