#include <iostream>

using namespace std;

int main(){
    int N,K;
    int result;
    
    cin>>N>>K;
    
    if(N<=K){
        cout<<0<<'\n';
        return 0;
    }
    
    for(result =0;;result++){
        int cnt = 0;
        int temp = N;
        
        while(temp){
            if(temp%2){
                cnt++;
            }
            temp/=2;
        }
        
        if(cnt<=K){
            break;
        }
        
        N++;
    }
    
    cout<<result<<'\n';
    
    return 0;
}