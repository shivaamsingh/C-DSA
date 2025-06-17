#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (cin.fail() || age < 0)
    {
        cout << "Invalid Input";
        return 1;
    }

    else if (age < 18)
    {
        cout << "Not eligible for job";
    }
    else if (age <= 57)
    {
        cout << "Eligible for job";
        if (age >= 55)
        {
            cout << " ,but retirement soon";
        }
    }

    else
    {
        cout << "retirement time";
    }

    return 0;
}