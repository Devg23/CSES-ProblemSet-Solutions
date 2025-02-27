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

    vector<pair<int,int>>vec;
    for(int i = 0;i<n;i++){
        vec.push_back({v[i],i});
    }
    
    sort(vec.begin(),vec.end());
    // for(int i = 0;i<n;i++){
    //     cout<<vec[i].first<<" "<<vec[i].second<<" ";
    //     cout<<endl;
    // }
    // cout<<endl;
    
    int count = 1;
    for(int i = 1;i<n;i++){
        if(vec[i-1].second > vec[i].second){
            count++;
        }
    }
    
    cout<<count<<endl;
}
