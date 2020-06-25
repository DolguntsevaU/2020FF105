#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
 {
   setlocale(LC_ALL, "Russian");
   double x; 
   cout << "Введите х=  ";
   cin >> x;
   double p = 1.;
   for (int i = 1; i <= 63; i += 2)
   {
       p *=  (x - i)/(x - i - 1) ;
   }
   cout << "Результат=  "<<p;
   return 0;
 }