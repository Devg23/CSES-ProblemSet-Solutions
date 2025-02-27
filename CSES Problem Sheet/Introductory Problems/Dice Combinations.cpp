#include <bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int solve(int n,vector<int>&dp){
    if(n == 0){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int count = 0;
    
    for(int i = 1;i<=6;i++){
        if(n-i >= 0){
            count = (count + solve(n-i,dp))%mod;
        }
    }
    
    return dp[n] = count;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int>dp(n+1,-1);
	cout<<solve(n,dp)<<endl;
	
}
