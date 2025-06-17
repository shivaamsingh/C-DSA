#include<bits/stdc++.h>
using namespace std;
// WAP that takes input of age and prints if you are an adult or not
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"Adult";
    }
    else{
        cout<<"Not an adult";
    }

    return 0;
}