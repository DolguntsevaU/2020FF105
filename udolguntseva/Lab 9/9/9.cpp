#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    std::cout << "Vvedite stroku (iz neskolkih slov): ";
    std::string s;
    std::getline(std::cin, s);
    string l= s.substr(s.find_last_of(' '));
    int n = 0;
    for (int m = 0; m < l.length(); m++)
    {
        if (l[m] == 'k')
        {
            n++;
        }
    }
    cout << "resultat: "
        << n, "\n";
    return 0;
}