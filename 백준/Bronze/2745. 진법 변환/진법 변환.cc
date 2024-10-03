#include <iostream>
using namespace std;

int main(){
    string n;
    int b, sum = 0;
   
    cin>>n>>b;
    
    int tmp = 1;
    
    for(int i=n.length()-1;i>=0;i--){
        int num;
		
		if(n[i] >= '0' && n[i] <= '9') {
			num = n[i] - '0';
		}
		else {
			num = n[i] - 'A' + 10;
		}
		
		num *= tmp;
		sum += num;
		tmp *= b;
    }
    
    cout<<sum;
    
    return 0;
}