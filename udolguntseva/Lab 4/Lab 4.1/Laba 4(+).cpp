#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
	int y;
	int x = 0;
	while (x < 29)
	{
		int S = 0;
		y = (2 * (x * x)) + 29;
		for (int i = 1; i < y; i++)
		{
			if (y % i == 0)
			{
				S++;
			}
		}
		if (S == 1)
		{
			cout << "y:" << y << " \n";
		}
		x = x++;
	};
	return 0;
}

