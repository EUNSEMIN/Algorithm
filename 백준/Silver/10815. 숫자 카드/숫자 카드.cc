#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, temp;
    vector<int> v;
    cin>>n;
    
    while(n--){
        cin>>temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    cin>>n;
    while(n--){
        cin>>temp;
        cout<<binary_search(v.begin(), v.end(), temp) << " ";
    }
}