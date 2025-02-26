#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, x;
    cin >> n >> x;

    multiset<long long int> tickets;
    vector<long long int> offers(x);

    // Read ticket prices
    for (int i = 0; i < n; i++) {
        long long int price;
        cin >> price;
        tickets.insert(price);
    }

    // Read customer offers
    for (int i = 0; i < x; i++) {
        cin >> offers[i];
    }

    // Process each customer
    for (int i = 0; i < x; i++) {
        long long int offer = offers[i];

        auto it = tickets.upper_bound(offer);
        if (it == tickets.begin()) {
            cout << "-1\n"; // No valid ticket found
        } else {
            --it; // Get the best available ticket ≤ offer
            cout << *it << endl;
            tickets.erase(it); // Remove the used ticket
        }
    }

    return 0;
}
