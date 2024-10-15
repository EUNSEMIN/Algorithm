#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, bool> map;
    int n, m, num;
    
	cin >> n >> m;
    
	for (int i = 0; i < n+m; i++)
	{
		cin >> num;
		if (map[num] == true) 
			map.erase(num);
		else 
			map[num] = true;
	}
    
	cout << map.size(); 
    return 0;
}