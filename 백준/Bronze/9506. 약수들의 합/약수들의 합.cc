#include <iostream>
#include <vector>
using namespace std;

int main(){
    while(1){
        int n;
        cin>>n;
        if(n==-1)
            break;
        
        int sum = 0;
        vector<int> arr;
        
        for(int i=1;i<n;i++){
            if(n%i==0){
                arr.push_back(i);
                sum+=i;
            }
        }
        
        if(sum==n){
            cout<<n<<" = ";
            
            for(int i=0;i<arr.size();i++){
                if(i==arr.size()-1){
                    cout<<arr[i];
                }else{
                    cout<<arr[i]<<" + ";
                }
            }
            cout<<endl;
        }else{
            cout << n << " is NOT perfect."<<endl;
        }
    }
    
    return 0;
}
