#include <iostream>
using namespace std;

int main(){
    int n,m;
    int arrA[101][101], arrB[101][101];
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arrA[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arrB[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arrA[i][j]+arrB[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}