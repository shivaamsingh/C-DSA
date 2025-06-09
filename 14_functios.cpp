#include<iostream>
using namespace std;
// void = which does not return anything
// return 
// parameterize  
// non parameterize
void printName(string name){
    cout<<name<<"\n";
}
int main(){
    string name;
    cin>>name;
    printName(name);


    string name2;
    cin>>name2;
    printName(name2);

    return 0;
}