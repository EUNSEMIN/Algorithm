#include <iostream>
using namespace std;

int main(){
    int max=0;
    int r=1, c=1;
    int arr[9][9];
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
            if(arr[i][j]>max){
                max = arr[i][j];
                r=i;
                c=j;
            }
        }
    }
    
    cout<<max<<endl;
    cout<<r+1<<" "<<c+1<<endl;
    
    return 0;
}