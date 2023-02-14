#include <iostream>
using namespace std;

int main()
{
    int num, max_num = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Inserisci il " << i << "° numero: ";
        cin >> num;
        if (num > max_num)
        {
            max_num = num;
        }
    }
    cout << "Il numero più grande è: " << max_num << endl;
    return 0;
}