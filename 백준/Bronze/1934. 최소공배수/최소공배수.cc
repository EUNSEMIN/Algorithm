#include<iostream>
using namespace std;

int main(){
    int t,a,b,min,max;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        
        max=a>b?a:b;
        min=a<b?a:b;
        
        for(int i=1;;i++){
            if((min*i)%max == 0){
                cout<<min*i<<"\n";
                break;
            }
        }
    }
    
    return 0;
}