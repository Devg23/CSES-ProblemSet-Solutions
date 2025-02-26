#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, target;
    cin >> n >> target;
    
    vector<pair<long long, int>> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());

    int low = 0, high = n - 1;

    while (low < high) {
        long long sum = arr[low].first + arr[high].first;
        
        if (sum == target) {
            cout << arr[low].second << " " << arr[high].second << endl;
            return 0;
        }
        else if (sum > target) {
            high--;
        }
        else {
            low++;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
