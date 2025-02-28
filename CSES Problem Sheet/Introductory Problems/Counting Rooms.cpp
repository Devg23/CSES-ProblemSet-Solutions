#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin >> n >> m;
	
	char mat[n][m];
	
	for(int i = 0;i<n;i++){
	    for(int j = 0;j<m;j++){
	        cin >> mat[i][j];
	    }
	}
	
	int count = 0;
	int dr[4] = {-1,0,1,0};
	int dc[4] = {0,1,0,-1};
	queue<pair<int,int>>q;
	for(int i = 0;i<n;i++){
	    for(int j = 0;j<m;j++){
	        if(mat[i][j] == '.'){
	            count++;
	            q.push({i,j});
	            mat[i][j] = '#';
	            while(!q.empty()){
	                int row = q.front().first;
	                int col = q.front().second;
	                q.pop();
	                for(int k = 0;k<4;k++){
	                    int nr = row + dr[k];
	                    int nc = col + dc[k];
	                    
	                    if(nr>=0 && nc >= 0 && nr < n && nc < m && mat[nr][nc] == '.'){
	                        q.push({nr,nc});
	                        mat[nr][nc] = '#';
	                    }
	                }
	            }
	        }
	    }
	}
	
	cout<<count;

}
