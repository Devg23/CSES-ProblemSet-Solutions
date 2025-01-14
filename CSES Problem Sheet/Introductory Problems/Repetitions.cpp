#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	if(s.length()==1){
	    cout<<1<<endl;
	    
	    return 0;
	}
	
	
	int i = 0;
	int j = 0;
	int ans = 1;
	while(j<s.length()){
	    if(s[i] == s[j]){
	        j++;
	        ans = max(ans,j-i);
	    }
	    else{
	        ans = max(ans,j - i);
	        i = j;
	    }
	}
	
//	ans = max(ans, j - i);

cout<<ans;

}
