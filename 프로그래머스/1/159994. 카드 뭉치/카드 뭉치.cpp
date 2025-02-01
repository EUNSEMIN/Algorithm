#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    queue<string> c1, c2;
    
    // 벡터 큐로 옮기기
    for(string a : cards1) c1.push(a);
    for(string a : cards2) c2.push(a);
    
    for(string a : goal){
        if(a == c1.front()){
            c1.pop();
            continue;
        }else if(a == c2.front()){
            c2.pop();
            continue;
        }else{
            answer = "No";
            return answer;
        }
    }
    
    answer = "Yes";
    return answer;
}