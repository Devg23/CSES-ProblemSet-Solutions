#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	
	int count = 0;
	for(int i=5;i<=n;i*=5){
	    count += n/i;
	}
	
	cout<<count<<endl;

}
