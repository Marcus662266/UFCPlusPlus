#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){


int piuGrande(int x,int y){
  int piuGrande(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int n1, n2;
    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    int max = piuGrande(n1, n2);
    cout << "Il numero piu' grande tra " << n1 << " e " << n2 << " e': " << max << endl;
    return 0;
}

}

bool isEven(int x)
{

     bool isEven(int x) {
    if (x % 2 == 0) {
        return true;
    } 
      else {
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
}

double costoTotale(double prezzo, int interesse){
  
        double costoTotale(double prezzo, int interesse) {
        double tassoInteresse = (double)interesse / 100;
        double costoInteresse = prezzo * tassoInteresse;
        double costoTot = prezzo + costoInteresse;
        return costoTot;
                      }

                       int main() {
                       double prezzo;
                       int interesse;
                       cout << "Inserisci il prezzo del prodotto: ";
                       cin >> prezzo;
                       cout << "Inserisci l'interesse percentuale: ";
                       cin >> interesse;
                       double costo = costoTotale(prezzo, interesse);
                       cout << "Il costo totale del prodotto e': " << costo << endl;
                       return 0;
                      }
}

void buttaFuori(int eta){}

void decrescente(int a,int b,int c){
    
}

void stampaNome(string nome){
  void stampaNome(string nome) {
    cout << "Il nome inserito e': " << nome << endl;
}

int main() {
    string nome;
    cout << "Inserisci un nome: ";
    cin >> nome;
    stampaNome(nome);
    return 0;
}

}

bool isBetween(int a,int b,int c){}

void equazione(int a,int b, int c){



     void equazione(int a, int b, int c) {
    int delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "L'equazione non ha soluzioni reali." << endl;
    } else if (delta == 0) {
        double soluzione = -b / (2 * a);
        cout << "L'equazione ha una soluzione reale: " << soluzione << endl;
    } else {
        double soluzione1 = (-b + sqrt(delta)) / (2 * a);
        double soluzione2 = (-b - sqrt(delta)) / (2 * a);
        cout << "L'equazione ha due soluzioni reali: " << soluzione1 << " e " << soluzione2 << endl;
    }
     }

              int main() {
              int a, b, c;
             cout << "Inserisci il coefficiente a: ";
             cin >> a;
             cout << "Inserisci il coefficiente b: ";
             cin >> b;
             cout << "Inserisci il coefficiente c: ";
             cin >> c;
             equazione(a, b, c);
             return 0;
                      }
}

bool bisestile(int anno){
    bool Bisestile(int anno) {
  return ((anno % 4 == 0) && (anno % 100 != 0)) || (anno % 400 == 0);
}

void stampaAnniBisestili(int annoIniziale, int annoFinale) {
  cout << "Anni bisestili tra " << annoIniziale << " e " << annoFinale << ":" << endl;
  for(int anno = annoIniziale; anno <= annoFinale; anno++) {
    if(isBisestile(anno)) {
      cout << anno << endl;
    }
  }
}

int main() {
  int annoIniziale, annoFinale;
  cout << "Inserisci l'anno di inizio: ";
  cin >> annoIniziale;
  cout << "Inserisci l'anno di fine: ";
  cin >> annoFinale;
  stampaAnniBisestili(annoIniziale, annoFinale);
  return 0;
}
}

void stampaTabelline(int n){
    
void stampaTabellinaSette() {
  for(int i = 1; i <= 10; i++) {
    std::cout << "7 x " << i << " = " << 7*i << std::endl;
  }
}}

void stampaTabelline (int n,int m){
    void stampaTabellinaSette() {
  for(int j = 1; j <= 20; j++) {
    std::cout << "Tabellina del sette (volta " << j << "):" << std::endl;
    for(int i = 1; i <= 10; i++) {
      std::cout << "7 x " << i << " = " << 7*i << std::endl;
    }
    std::cout << std::endl;
  }
}}

void stampaPari(int quanti){
    void stampaNumeriPari(int n) {
  cout << "Numeri pari tra 1 e " << n << ":" << endl;
  for(int i = 2; i <= n; i += 2) {
    cout << i << endl;
  }
}

int main() {
  int n;
  cout << "Inserisci un numero intero positivo: ";
  cin >> n;
  stampaNumeriPari(n);
  return 0;
}
}



}
