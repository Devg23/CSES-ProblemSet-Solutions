#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	long long int sum = 0;
	
	for(int i = 0;i<n-1;i++){
	    int x;
	    cin >> x;
	    sum += x;
	}
	long long int S = 1ll*n*(n+1)/2;
	cout<<S - sum<<endl;

}
