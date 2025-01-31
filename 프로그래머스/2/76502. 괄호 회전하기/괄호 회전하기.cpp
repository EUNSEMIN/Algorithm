#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;

    // 문자열을 회전시키면서 검사
    for (int i = 0; i < s.length(); i++) {
        stack<char> st;
        bool is_valid = true;

        // 괄호가 올바르게 짝을 이루는지 확인
        for (int j = 0; j < s.length(); j++) {
            char ch = s[(i + j) % s.length()];  // 회전된 문자열에서 해당 문자
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    is_valid = false;  // 여는 괄호가 없는 상태에서 닫는 괄호가 나옴
                    break;
                } else {
                    char top = st.top();
                    if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')) {
                        st.pop();
                    } else {
                        is_valid = false;  
                        break;
                    }
                }
            }
        }
        
        if (is_valid && st.empty()) {
            answer++;  // 괄호가 짝을 이룬 회전
        }
    }
    
    return answer;
}
