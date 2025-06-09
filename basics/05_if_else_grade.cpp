#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your marks: ";
    cin >> num;
    if (cin.fail())
    {
       cout<<"Invalid Input";
    }
    
    else if (num >= 80 && num <= 100)
    {
        cout << "A";
    }
    else if (num >= 60 && num < 80)
    {
        cout << "B";
    }
    else if (num >= 50 && num < 60)
    {
        cout << "C";
    }
    else if (num >= 40 && num < 50)
    {
        cout << "D";
    }
    else if (num >= 30 && num < 40)
    {
        cout << "E";
    }
    else if (num>=0 && num<30)
    {
        cout << "F";
    }
    else if (num < 0 || num > 100)
    {
        cout << "Invalid number";
    }

    return 0;
}