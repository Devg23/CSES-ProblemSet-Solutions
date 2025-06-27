#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // ✅ Fast IO
    cin.tie(nullptr);             // ✅ Fast IO
    int n;
    multiset<int>s;
    cin >> n;
    int count = 0;
    for(int i = 0;i<n;i++){
        int curr;
        cin >> curr;
        
        auto next = s.upper_bound(curr);
        
        if(next != s.end()){
            s.erase(next);
            s.insert(curr);
            
        }else{
            s.insert(curr);
            count++;
        }
        
    }
    
    cout<<count<<endl;
    return 0;
}
