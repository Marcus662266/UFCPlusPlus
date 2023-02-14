#include <iostream>
using namespace std;

int main()
{
    int num;
    int maxnum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Inserisci il " << i << "° numero: ";
        cin >> num;
        if (num > maxnum)
        {
            maxnum = num;
        }
    }
    cout << "Il numero più grande è: " << maxnum << endl;
    return 0;
}