#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int n;
	cin >> n;
	unordered_map<int,int>mp;
	
	for(int i = 0;i<n;i++){
	    int x;
	    cin >> x;
	    mp[x]++;
	}
	
	cout<<mp.size()<<endl;

}
