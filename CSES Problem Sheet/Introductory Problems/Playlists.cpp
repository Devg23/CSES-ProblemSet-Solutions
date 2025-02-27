#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int>v;
	for(int i = 0;i<n;i++){
	    int x;
	    cin >> x;
	    v.push_back(x);
	}
	map<int,int>mp;
	
	int ans = 0;
	int start = 0;
	
	for(int end = 0;end<n;end++){
	    if(mp.find(v[end]) == mp.end()){
	        mp[v[end]] = end;
	    }
	    else{
	        if(mp[v[end]] >= start){
	            start = mp[v[end]]+1;
	        }
	        mp[v[end]] = end;
	    }
	    
	    ans = max(ans,end - start + 1);
	}
	
	cout<<ans<<endl;
	
}
