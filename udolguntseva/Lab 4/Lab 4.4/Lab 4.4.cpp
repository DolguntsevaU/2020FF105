#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, x, y, h;
	cout << "Введите a,b: \n"<<"a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "Введите шаг ";
	cin >> h;
	x = a;
	while (x <= b)
	{
		y =( 2*pow(sin(x),2))-1;
		cout << "x= " << x << "  y= " << y << "\n";
		x = x + h;
	}
}

	  
