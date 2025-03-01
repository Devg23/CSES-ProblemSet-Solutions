#include <bits/stdc++.h>
using namespace std;
int n;
int mod = 1e9 + 7;
int solve(int i,int j,vector<string>&v, vector<vector<int>>&dp){
    if(i==n || j == n){
        return 0;
    }
    
    if(v[i][j] == '*'){
        return 0;
    }
    if(i == n-1 && j == n-1){
        return 1;
    }
    if(dp[i][j] != -1){
        return dp[i][j]%mod;;
    }
    long long int right = solve(i+1,j,v,dp)%mod;
    long long int down = solve(i,j+1,v,dp)%mod;
    
    return dp[i][j] = (right + down)%mod;
    
}
int main() {
	// your code goes here
    // int n;
    cin >> n;
    
    vector<string>v;
    vector<vector<int>>dp(n,vector<int>(n,-1));
    
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        v.push_back(s);
        
    }
    
    cout<<solve(0,0,v,dp)<<endl;
}
