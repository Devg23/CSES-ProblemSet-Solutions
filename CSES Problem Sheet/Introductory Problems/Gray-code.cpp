#include <bits/stdc++.h>
using namespace std;
void solve(int n,vector<string>&v,string s){
    if(s.length() == n){
        v.push_back(s);
        return;
    }
    
    solve(n,v,s+"0");
    solve(n,v,s + "1");
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	
	vector<string>v;
	string s = "";
    solve(n,v,s);
    vector<string>gray;
    
    for(int i = 0;i<v.size();i++){
        string grey = "";
        grey += v[i][0];
        
        for(int j = 1;j<n;j++){
            grey += (v[i][j-1]^v[i][j])+'0';
        }
        
        gray.push_back(grey);
    }
    for(auto it:gray){
        cout<<it<<endl;
    }
}
