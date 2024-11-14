#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int layer=1, count =1;
    
    while(n>count){
        count += 6*layer;
        layer ++;
    }
    
    cout<<layer;
    
    return 0;
}