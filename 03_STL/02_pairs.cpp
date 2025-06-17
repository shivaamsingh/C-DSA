#include <iostream>
using namespace std;
void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> p1={1,{3,4}};
    
}

int main() {
    
    return 0;
}