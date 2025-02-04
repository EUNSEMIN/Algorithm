#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer;
    unordered_map<string, int> map;  // 수익을 저장하는 map
    unordered_map<string, string> parentMap;  // 자식과 부모 관계를 저장하는 map

    for (string a : enroll) {
        map[a] = 0;
    }
    
    for (int i = 0; i < enroll.size(); i++) {
        parentMap[enroll[i]] = referral[i];
    }

    for (int i = 0; i < seller.size(); i++) {
        string name = seller[i]; 
        int cash = amount[i] * 100;  
        
        while (name != "-" && cash > 0) {
            if (cash * 0.1 >= 1) {
                map[name] += cash - cash / 10; 
                cash /= 10; 
            } else {
                map[name] += cash;  
                cash = 0; 
            }
            
            name = parentMap[name]; 
        }
    }
    
    for (string a : enroll) {
        answer.push_back(map[a]);
    }
    
    return answer;
}
