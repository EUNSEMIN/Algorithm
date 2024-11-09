#include <iostream>
using namespace std;

int main(){
    while(1){
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a==0&&b==0&&c==0)break;
        int maxN = max(a,max(b,c));
    
        if(maxN >= (a+b+c)-maxN){
            cout<<"Invalid"<<endl;
        }else{
            if(a==b && b==c){
                cout<<"Equilateral"<<endl;
            }else if(a==b||b==c||c==a){
                cout<<"Isosceles"<<endl;
            }else{
                cout<<"Scalene"<<endl;
            }
        }
    }
    
    return 0;
}