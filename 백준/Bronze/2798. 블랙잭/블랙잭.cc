#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    
    int arr[n];
    int dif = 9999999;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((m-(arr[i]+arr[j]+arr[k]))<dif && m >= (arr[i]+arr[j]+arr[k])){
                    dif = m-(arr[i]+arr[j]+arr[k]);
                }
            }
        }
    }
    
    cout<<m-dif;
    
    return 0;
}