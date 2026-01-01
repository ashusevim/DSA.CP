#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline '\n'

int main(){
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        ll v[n];
        for(int i = 0; i<n; i++)cin >> v[i];
        ll post[n+1];
        post[n] = 0;
        post[n-1] = v[n-1];
        for(int i = n-2; i>=0; i--){
            post[i] = post[i+1] + v[i];
        }
        ll ans = -post[1];
        ll sum = v[0];
        for(int i = 1; i<n; i++){
            ans = max(ans, sum - post[i+1]);
            sum = sum + abs(v[i]);
        }
        cout << ans << nline;
    }
}