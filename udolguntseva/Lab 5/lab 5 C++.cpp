#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, p, s;
	s = 1;
	n = 1;
	k = 1;
	cout << "Введите произведение нескольких первых нечётных натуральных чисел" << "\n" << "p=" ;
	cin >> p;
	while (s < p)
	{
		k = k + 2;
		n++;
		s = s * k;
	};
	if (s==p)
	{
		cout << "Взято множителей:" << n << "\n";
	}
	else
	{
		cout << "Число " << p << " не является произведением первых нечётных чисел" << "\n";
	};
	return 0;
}