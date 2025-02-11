#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> result;
    
    for(int i=0;i<nums.size(); i++){
        if(find(result.begin(), result.end(), nums[i]) == result.end()){
            result.push_back(nums[i]);
        }
    }
    
    if(result.size() > nums.size()/2){
        answer = nums.size()/2;
    }else{
        answer = result.size();   
    }
    
    return answer;
}