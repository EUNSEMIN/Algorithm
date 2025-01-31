#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st; 
    
    for(char a : s){
        if(a == '('){
            st.push(a);
        }else if(a == ')'){
            if(st.empty()){
                return false;
            }else{
                st.pop();
            }
        }
    }
    
    answer = st.empty();

    return answer;
}