#include <iostream>
using namespace std;
int main()
{
    string s = "Potter";   // creates a string s with value potter
    int length = s.size(); // get the length of the string (which is 6)
    s[length - 1] = 'z';   // replace the last char (r) with z
    // cout<<s[1];
    cout << s; // print the modified string(Pottez)
    

    return 0;
}