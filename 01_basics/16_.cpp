#include<iostream>
using namespace std;
//pass by value
void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    doSomething(num);
    
    cout<<num<<endl;


    return 0;
}