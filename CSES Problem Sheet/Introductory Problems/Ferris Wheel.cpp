#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, x;
    cin >> n >> x;
    vector<long long int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // Sort the weights

    int l = 0, r = n - 1;
    int ans = 0; // Count of gondolas

    while (l <= r) {
        if (v[l] + v[r] <= x) { 
            // If the lightest and heaviest fit, move both pointers
            l++;
        }
        // Always move the heavier person (r pointer)
        r--;
        ans++; // One gondola used
    }

    cout << ans << endl;
    return 0;
}