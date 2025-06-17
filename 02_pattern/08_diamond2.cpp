#include <iostream>
using namespace std;

void diamond(int n)
{
    // Upper half
    for (int i = 0; i < n; i++) 
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = 1; i < n; i++) 
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    diamond(n);
    return 0;
}
