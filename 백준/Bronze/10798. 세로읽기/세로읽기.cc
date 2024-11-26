#include <iostream>
using namespace std;

char arr[5][15];


int main(){

    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    
    for(int k=0;k<15;k++){
        for(int j=0;j<5;j++){
            if(arr[j][k] != NULL){
                cout<<arr[j][k];
            }
        }
    }
    
    return 0;
}