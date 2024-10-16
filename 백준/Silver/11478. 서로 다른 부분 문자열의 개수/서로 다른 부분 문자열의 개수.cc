#include <iostream>
#include <set>
using namespace std;

int main(){
    string s, stemp="";
    set<string> set;
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            stemp += s[j];
            set.insert(stemp);
        }
        stemp = "";
    }
    
    cout<<set.size();
    return 0;
}