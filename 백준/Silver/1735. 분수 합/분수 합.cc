#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(b==0){
        return a;
    }
    return GCD(b, a%b);
}

int main(){
    int de, nu, a, b, c, d;
    
    cin>>a>>b;
    cin>>c>>d;
    
    de = (b*d)/GCD(b,d);
    nu = (de/b)*a + (de/d)*c;
    
    int gcd_result = GCD(de, nu);
    
    cout<<nu/gcd_result<<" "<<de/gcd_result;
    
    
    return 0;
}