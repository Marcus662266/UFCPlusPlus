#include <iostream>
#include <string>

using namespace std;

void identita(string nome, string cognome) {
  cout << "Ciao " << nome << " " << cognome << "!" << endl;
}

int main() {
  string nome;
  string cognome;

  cout << "Inserisci il tuo nome: ";
  cin >> nome;

  cout << "Inserisci il tuo cognome: ";
  cin >> cognome;

  identita(nome, cognome);

  return 0;
}