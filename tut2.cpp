#include <iostream>
using namespace std;
int glo = 6;
void sum()
{
    cout << glo;
}
int main()
{
    int a = 2;
    int b = 3;
    char d = '2';
    int glo = 7;
    glo = 8;
    sum();
    cout << "\n"
         << glo;
    
    return 0;
}