#include <iostream>
#include <string>

using namespace std;

bool doppia(string parola) {
  for (int i = 0; i < parola.length() - 1; i++) {
    if (parola[i] == parola[i+1]) {
      return true;
    }
  }
  return false;
}

int main() {
  string parola;
  cout << "Inserisci una parola: ";
  cin >> parola;

  if (doppia(parola)) {
    cout << "La parola contiene lettere doppie." << endl;
  } else {
    cout << "La parola non contiene lettere doppie." << endl;
  }

  return 0;
}