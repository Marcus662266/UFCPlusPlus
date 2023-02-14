#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void stampaAnniBisestili(int annoIniziale, int annoFinale)
{
    cout << "Anni bisestili tra " << annoIniziale << " e " << annoFinale << ":" << endl;
    for (int anno = annoIniziale; anno <= annoFinale; anno++)
    {
        if (((anno % 4 == 0) && (anno % 100 != 0)) || (anno % 400 == 0))
        {
            cout << anno << endl;
        }
        }
}

int main()
{
    int annoIniziale, annoFinale;
    cout << "Inserisci l'anno di inizio: ";
    cin >> annoIniziale;
    cout << "Inserisci l'anno di fine: ";
    cin >> annoFinale;
    stampaAnniBisestili(annoIniziale, annoFinale);
    return 0;
}