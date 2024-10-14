#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    string temp;
    vector<string> vec1, vec2, result;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> temp;
        vec1.push_back(temp);
    }
    
    sort(vec1.begin(), vec1.end());
    
    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (binary_search(vec1.begin(), vec1.end(), temp)) {
            result.push_back(temp);
        }
    }
    
    sort(result.begin(), result.end());
    
    cout << result.size() << "\n";
    for (const auto &name : result) {
        cout << name << "\n";
    }
    
    return 0;
}
