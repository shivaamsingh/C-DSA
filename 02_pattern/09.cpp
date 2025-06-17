#include <iostream>
using namespace std;

void print9(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = i;
        if (i >= n)
        {
            stars = 2 * n - 2 - i;
        }

        for (int j = 0; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print9(n);
    return 0;
}
