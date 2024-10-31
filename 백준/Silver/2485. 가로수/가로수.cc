#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 최대공약수 구하기
int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    return GCD(b, a%b);
}

int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    
    int n, temp, gcd=0, count=0;
    vector<int> tree, interval;
    
    // 나무 수 입력 받기
    cin>>n;
    
    // n만큼 나무 위치 입력 받기
    for(int i=0; i<n; i++){
        cin>>temp;
        tree.push_back(temp);
    }
    
    // 나무들 사이 간격 확인
    for(int i=n-1; i>0; i--){
        temp = tree[i] - tree[i-1];
        interval.push_back(temp);
    }
    
    // 최대공약수 찾기
    for(int i=0; i<interval.size(); i++){
        gcd = GCD(interval[i], gcd);
    }
    
    // 결과값 구하기
    for (int i = 1; i < n; i++) {
        count += (tree[i] - tree[i - 1]) / gcd - 1;
    }
    
    cout<<count;
    
    return 0;
}