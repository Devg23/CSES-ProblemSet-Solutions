#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	long long int arr[n];
	for(int i = 0;i<n;i++){
	    cin >> arr[i];
	}
	
	sort(arr,arr+n);
	
	if(n%2 == 1){
	    long long int ans = 0;
	    long long int med = arr[n/2];
	    for(int i = 0;i<n;i++){
	        ans += abs(med - arr[i]);
	    }
	    
	    cout<<ans<<endl;
	    return 0;
	}
	
	long long int ans1 = 0;
	long long int ans2 = 0;
    
    long long int med1 = arr[(n-1)/2];
    long long int med2 = arr[n/2];
    
    for(int i = 0;i<n;i++){
        ans1 += abs(med1 - arr[i]);
        ans2 += abs(med2 - arr[i]);
    }
    
    cout<<min(ans1,ans2)<<endl;

}
