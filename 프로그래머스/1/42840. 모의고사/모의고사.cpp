#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec1 = {1,2,3,4,5};
vector<int> vec2 = {2,1,2,3,2,4,2,5};
vector<int> vec3 = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> count(3,0);
    
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == vec1[i%vec1.size()])
            count[0]++;
        if(answers[i] == vec2[i%vec2.size()])
            count[1]++;
        if(answers[i] == vec3[i%vec3.size()])
            count[2]++;
    }
    
    int max_score = *max_element(count.begin(), count.end());
    
    for(int i=0; i<3; i++){
        if(count[i] == max_score){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}