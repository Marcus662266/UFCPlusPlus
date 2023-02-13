#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "La somma dei primi 100 numeri interi è: " << sum << endl;
    return 0;
}