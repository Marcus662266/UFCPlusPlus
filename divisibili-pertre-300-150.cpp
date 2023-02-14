#include <iostream>
using namespace std;

int main()
{
    for (int i = 300; i >= 150; i--)
    {
        cout << "i= " << i << "\n";
        if (i % 3 == 0)
        {
            cout << "true "
                 << "\n";
            cout << i << " "
                 << "\n";
        }
        else
        {
            cout << "false"
                 << "\n";
        }
        cout << "-----"
             << "\n";
    }

    cout << endl;
    return 0;
}