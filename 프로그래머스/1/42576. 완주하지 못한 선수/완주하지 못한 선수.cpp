#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> mPar;
    
    // 참여자 명단 map에 옮기기
    for(const string& a : participant){
        mPar[a]++;
    }
    
    // 명단 확인
    for(int i=0; i<completion.size(); i++){
        mPar[completion[i]]--;
    }
    
    // 값 0이 아닌 사람 찾기
    for(const auto& a : mPar){
        if(a.second != 0){
            return a.first;
        }
    }
    
    return "";
}