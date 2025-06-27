#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // ✅ Fast IO
    cin.tie(nullptr);             // ✅ Fast IO

    int x, n;
    cin >> x >> n;

    set<int> lights = {0, x};           // positions with traffic lights
    multiset<int> gaps = {x};           // segments between lights

    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;

        // find where the new light is being inserted
        auto it = lights.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        // remove old segment
        gaps.erase(gaps.find(right - left));

        // add new segments
        gaps.insert(p - left);
        gaps.insert(right - p);

        // insert light
        lights.insert(p);

        cout << *gaps.rbegin() << " ";
    }

    cout << '\n';
    return 0;
}
