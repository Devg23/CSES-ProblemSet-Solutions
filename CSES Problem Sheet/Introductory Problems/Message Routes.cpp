#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin >> n >> m;
    unordered_map<int,vector<int>>adj;	
	for(int i = 0;i<m;i++){
	    int x,y;
	    cin >> x >> y;
	    adj[x].push_back(y);
	    adj[y].push_back(x);
	}
	
    queue<pair<int,int>>q;
    vector<int>vis(n+1,0);
    vector<int>parents(n+1,-1);
    
    q.push({1,1});
    vis[1] = 1;
    while(!q.empty()){
        int node = q.front().first;
        int step = q.front().second;
        q.pop();
        if(node == n){
            vector<int>ans;
            cout<<step<<endl;
            for(int i = n;i!=-1;i = parents[i]){
                ans.push_back(i);
            }
            
            reverse(ans.begin(),ans.end());
            
            for(auto it:ans){
                cout<<it<<" ";
            }
            return 0;
        }
        
        for(auto it:adj[node]){
            if(!vis[it]){
                q.push({it,step+1});
                vis[it] = 1;
                parents[it] = node;
            }
        }
        
    }
cout<<"IMPOSSIBLE"<<endl;
}
