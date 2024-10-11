#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, count;
    cin>>n;
    
    int num[10001] = {0};
    
    for(int i=0;i<n;i++){
        cin>>count;
        num[count]++;
    }
    
    for(int i=1;i<10001;i++){
        for(int j=0;j<num[i];j++){
            cout<<i<<'\n';
        }
    }
    
    return 0;
}