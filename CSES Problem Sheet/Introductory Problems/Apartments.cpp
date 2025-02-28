#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,k;
	cin >> n >> m >> k;
    vector<int>a;
    vector<int>b;
    
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0;i<m;i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int i = 0;
    int j = 0;
    int ans = 0;
    while(i<n && j<m){
        if(abs(a[i] - b[j]) <=k){
            ans++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    
    cout<<ans<<endl;

}
