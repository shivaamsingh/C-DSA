#include <iostream>
using namespace std;
int main()
{
    int num;
    char grade;
    cout << "Enter a number:";
    cin >> num;
    if (cin.fail() || num < 0 || num > 100)
    {
        cout << "Invalid Input";
        return 1;
    }

    if (num >= 80 && num <= 100)
        grade = 'A';
    else if (num >= 70 && num < 80)
        grade = 'B';
    else if (num >= 60 && num < 70)
        grade = 'C';
    else if (num >= 50 && num < 60)
        grade = 'D';
    else if (num >= 40 && num < 50)
        grade = 'E';
    else
        grade = 'F';

    switch (grade)
    {
    case 'A':
        cout << "A" ;
        break;
    case 'B':
        cout << "B" ;
        break;
    case 'C':
        cout << "C" ;
        break;
    case 'D':
        cout << "D" ;
        break;
    case 'E':
        cout << "E" ;
        break;
    case 'F':
        cout << "F" ;
        break;
    default:
        cout << "Unknown grade!" ;
    }

    return 0;
}