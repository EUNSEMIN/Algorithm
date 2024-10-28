#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;    
}

int main(){
    int n;
    cin>>n;
    
    pair<int, string> pa;
    vector<pair<int, string>> vec;
    
    for(int i=0;i<n;i++){
        cin>>pa.first>>pa.second;
        vec.push_back(pa);
    }
    
    stable_sort(vec.begin(), vec.end(), cmp);
    
    for(pair<int, string> a : vec){
        cout<<a.first<<" "<<a.second<<'\n';
    }
    
    return 0;
}