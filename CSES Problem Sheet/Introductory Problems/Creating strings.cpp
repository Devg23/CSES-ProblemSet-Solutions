#include <bits/stdc++.h>
using namespace std;

void solve(string &s,int ind,set<string>&v){
    
    if(ind == s.length()){
        v.insert(s);
    }
    
    for(int i = ind;i<s.length();i++){
        swap(s[i],s[ind]);
        solve(s,ind+1,v);
        swap(s[i],s[ind]);
    }
}
int main() {
	// your code goes here
	
	string s;
	cin >> s;
	set<string>v;
	
	solve(s,0,v);
	cout<<v.size()<<endl;
	for(auto it:v){
	    cout<<it<<endl;
	}
	

}
