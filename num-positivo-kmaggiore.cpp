#include <iostream>
using namespace std;

int main()
{
    int N, K = 1, sum = 1;
    cout << "Inserisci un numero positivo N: ";
    cin >> N;
    while (sum + K + 1 <= N)
    {
        K++;
        sum += K;
        cout << "----------";
    }
    cout << "Il massimo intero K tale che la somma dei primi K interi sia minore o uguale a N è: " << K << "\n";
    return 0;
}