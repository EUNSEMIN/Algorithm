#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n,v;
    int count =0;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>v;
    
    for(int j=0;j<n;j++){
        if(arr[j] == v){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}