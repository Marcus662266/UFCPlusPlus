#include <iostream>

void fibonacci(int n)
{
    int prev = 0, curr = 1;
    std::cout << prev << " " << curr << " ";

    for (int i = 2; i < n; i++) {
        int next = prev + curr;
        std::cout << next << " ";
        prev = curr;
        curr = next;
    }

    std::cout << std::endl;
}

int main()
{
    int n;
    std::cout << "Inserisci il numero di elementi di Fibonacci da stampare: ";
    std::cin >> n;

    fibonacci(n);

    return 0;
}