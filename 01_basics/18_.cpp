#include<iostream>
using namespace std;
void doSomething(int arr[],int n){
    arr[0]+=10;
    cout<<"Value of inside fn:"<<arr[0]<<endl;
    
}
int main(){
    int n=5;
    int arr[2];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    
    doSomething(arr,n);
    cout<<"Value of inside main fn:"<<arr[0]<<endl;

    return 0;
}