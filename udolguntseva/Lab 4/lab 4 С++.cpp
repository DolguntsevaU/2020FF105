#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
	int n,k,p,s;
	s = 1;
	n = 1;
	k = 1;
	cout << "Введите произведение нескольких первых нечётных натуральных чисел" << "\n" << "p="<<"\n";
	cin >> p;
	while (s<p)
	{
		k = k+2;
		n = n++;
		s = s * k;
	};
	if (s<>p)
	{
		cout << "Число" << p << "не является произведением первых нечётных чисел"<<"\n";
	};
	else
	{
		cout << "Взято множителей:" << n <<"\n";
	};
	return 0;
}

