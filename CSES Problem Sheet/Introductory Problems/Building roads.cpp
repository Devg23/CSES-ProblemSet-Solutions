#include <bits/stdc++.h>
using namespace std;
int n;
void DFS (int node,vector<int>&vis,unordered_map<int,vector<int>>&adj) {
  vis[node] = true;
  for (auto child : adj[node]) {
    if (vis[child] == false) {
      DFS(child,vis,adj);
    }
  }
}
int main() {
	// your code goes here
	int m;
	cin >> n >> m;
	
	unordered_map<int,vector<int>>adj;
	
	for(int i = 0;i<m;i++){
	    int x,y;
	    cin >> x >> y;
	    adj[x].push_back(y);
	    adj[y].push_back(x);
	}
	//int count = 0;
	vector<int>vis(n+1,0);
	//int count = 0;
	vector<int>ans;
	for(int i = 1;i<=n;i++){
	    if(!vis[i]){
	        ans.push_back(i);
	        DFS(i,vis,adj);
	    }
	  }
	
	cout<<ans.size()-1<<endl;;
	
	for(int i = 0;i<ans.size()-1;i++){
	    cout<<ans[i] << " " << ans[i+1]<<endl;
	}

}
