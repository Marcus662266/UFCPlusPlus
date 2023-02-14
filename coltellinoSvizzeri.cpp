#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){


int piuGrande(int x,int y){

}

bool isEven(int x){}

double costoTotale(double prezzo, int interesse){}

void buttaFuori(int eta){}

void decrescente(int a,int b,int c){}

void stampaNome(string nome){}

bool isBetween(int a,int b,int c){}

void equazione(int a,int b, int c){}

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
