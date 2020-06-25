#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    int figure = 0, summa = 0;
    double n = 10;
    int  i, a, b, st;
    for (i = 1; i < 1000; i++)
    {
            a = b = i;
            
            while (a) 
            {
                a /= 10;
                figure++;
            }
            
            st = pow(n, figure - 1); 
            
            while (b) 
            {
                summa += pow((double)(b / st), figure); 
                b %= st;
                st /= 10;
            }
            
            if (summa == i) 
                std::cout << i << "  Armstrong number " << std::endl;
            figure = 0;
            summa = 0;
    }
    
}

