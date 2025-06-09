#include<iostream>
using namespace std;
//pass by reference
void doSome(string &s){
    s[0]='t';
    cout<<s<<endl;
}

int main(){
    string s="raj";
    doSome(s);
    cout<<s<<endl;



    return 0;
}