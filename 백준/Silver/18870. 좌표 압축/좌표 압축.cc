#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> res(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> res[i];
    }
    vector<int> tmp(res); 
    sort(tmp.begin(), tmp.end()); 

    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(tmp.begin(), tmp.end(), res[i]);
        cout << it - tmp.begin() << ' ';
    }

    return 0;
}