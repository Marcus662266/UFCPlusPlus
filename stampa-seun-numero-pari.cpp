// stampa numero pari o dispari

#include <iostream>
using namespace std;

bool isEven(int x) {
    if (x % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;
    if (isEven(n)) {
        cout << n << " e' un numero pari." << endl;
    } else {
        cout << n << " e' un numero dispari." << endl;
    }
    return 0;
}