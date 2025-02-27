#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<pair<int,int>>v;
	for(int i = 0;i<n;i++){
	    int x,y;
	    cin >> x >>y;
	    v.push_back({y,x});
	}
	sort(v.begin(),v.end());
	int ans = 0;
	//int start = 0;
	int end = 0;
	for(int i = 0;i<n;i++){
	    if(v[i].second >= end){
	        ans++;
	        end = v[i].first;
	    }
	}
	cout<<ans<<endl;
	
}
