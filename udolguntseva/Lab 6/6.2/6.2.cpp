#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int pss(char sr[80], int i, int osn)
{
	static int s;
	char ch = sr[i - 1];
	if (i == strlen(sr)) s = 1;
	s = s * osn;
	if (1 < i) return (atoi(&ch) + pss(sr, i - 1, osn) * osn);
	else return (atoi(&ch));
}
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	int osn = 0;
	char st[80];
	cout << " задайте основание (от 2 до 9)  ";
	cin >> osn; 
	cout << endl;
	cout << "число:  "; cin >> st;
	cout << endl;
	cout << "в десятичной системе:  "
		<< pss(st, strlen(st), osn);
	return(0);
}



