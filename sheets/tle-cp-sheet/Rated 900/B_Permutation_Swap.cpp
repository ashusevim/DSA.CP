#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++)cin >> v[i];
        int ans = 0;
        for(int i = 0; i<n; i++){
            ans = __gcd(ans, abs(v[i]-(i+1)));
        }
        cout << ans << '\n';
    }
}