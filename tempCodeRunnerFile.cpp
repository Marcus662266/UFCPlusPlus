#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void stampaNumeriPari(int n)
{
    cout << "Numeri pari tra 1 e " << n << ":" << endl;
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cout << "Inserisci un numero intero positivo: ";
    cin >> n;
    stampaNumeriPari(n);
    return 0;
}
