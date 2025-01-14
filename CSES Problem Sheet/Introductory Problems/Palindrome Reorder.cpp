#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin >> s;
    
    int i = 0;
    int j = s.length()-1;
    
    map<char,int>mp;
    
    for(int ch = 0;ch<s.length();ch++){
        mp[s[ch]]++;
    }
    
    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    priority_queue<pair<int,char>>pq;
    int odd = 0;
    for(auto it:mp){
        if(it.second %2 ==1){
            odd++;
        }
        pq.push({it.second,it.first});
        
    }
    
    //sort(vec.begin(),vec.end(),greater<pair<int,int>>());
    
    if(odd > 1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    char c;
    while(i<j){
        // if(j-i == 2){
        //     s[i] = 
        // }
        
        while(!pq.empty()){
            int val = pq.top().first;
            char ch = pq.top().second;
            
            pq.pop();
            if(val == 1){
                s[i] = ch;
                i++;
                break;
            }
            if(val%2==1){
                pq.push({1,ch});
            }
            int size = val/2;
            while(size--){
                s[i] = ch;
                i++;
                s[j] = ch;
                j--;
            }
        }
    }
    
    cout<<s<<endl;
    
    
    
}
