#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int n;
   cin >> n;
   long long int arr[n];
   for(int i = 0;i<n;i++){
       cin >> arr[i];
   }
   int mx = INT_MIN;
   
   long long int sum = 0;
   long long int ans = -1;
   for(int i = 0;i<n;i++){
       sum += arr[i];
       mx = max(mx,arr[i]);
       if(sum<0){
           sum = 0;
       }
       ans = max(ans,sum);
   }
   if(ans == 0){
       ans = mx;
   }
   
   cout<<ans<<endl;
}
