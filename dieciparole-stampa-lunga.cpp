#include <iostream>
#include <string>

using namespace std;

int main() {
  string parole[10];
  string parolaMax;

  // iserisci le parole
  for (int i = 0; i < 10; i++) {
    cout << "Inserisci la parola " << i+1 << ": ";
    cin >> parole[i];
  }

  // parola piu lunga
  for (int i = 0; i < 10; i++) {
    if (parole[i].length() > parolaMax.length()) {
      parolaMax = parole[i];
    }
  }

  // stampa la parola piu grande 
  cout << "La parola più grande è: " << parolaMax << endl;

  return 0;
}