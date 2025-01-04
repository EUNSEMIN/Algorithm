#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> count(4,0);
    
    // 찍는 방식 기록
    vector<int> a1 = {1,2,3,4,5};
    vector<int> a2 = {2,1,2,3,2,4,2,5};
    vector<int> a3 = {3,3,1,1,2,2,4,4,5,5};
    
    // 정답 대조
    for(int i=0; i<answers.size(); i++){
        if(answers[i]==a1[i%5]) count[1]++;
        if(answers[i]==a2[i%8]) count[2]++;
        if(answers[i]==a3[i%10]) count[3]++;
    }
    
    // 가장 높은 점수 
    int max = *max_element(count.begin(), count.end());
    
    // answer에 1등 기록
    for(int i=1;i<count.size(); i++){
        if(max == count[i]) answer.push_back(i);
    }
    
    // 정렬
    sort(answer.begin(), answer.end());
    
    return answer;
}