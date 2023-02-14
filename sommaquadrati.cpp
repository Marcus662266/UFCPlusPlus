#include <iostream>
#include <math.h>
using namespace std;
int somma(int x)
{

    int som = 0;
    for (int i = 0; i <= x; i++)
    {
        som += i * i;
    }
    return som;
}
int main()
{
    
    cout << somma(20) << somma(10)<< "\n";
}
