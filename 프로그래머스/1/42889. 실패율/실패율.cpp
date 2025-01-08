#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int, float> a, pair<int, float> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, float>> failRates;
    
    for(int i=1;i<=N;i++){
        int a{0}, b{0};
        for(int j=0;j<stages.size();j++){
            if(i==stages[j]){
                a++;
            }
            if(stages[j] >= i){
                b++;
            }
        }
        
        float ratio = (a==0) ? 0 : (float)a/b;
        failRates.push_back({i, ratio});
    }
    
    sort(failRates.begin(), failRates.end(), cmp);
    
    for(auto& a : failRates){
        answer.push_back(a.first);
    }
    
    
    
    return answer;
}