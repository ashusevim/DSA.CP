#include<bits/stdc++.h>
using namespace std;

long long v[200005], pref[200005];

int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n, Q;
        cin >> n >> Q;
        long long sum = 0;
        for(int i = 1; i<=n; i++){
            cin >> v[i];
            sum += v[i];
            pref[i] = pref[i-1];
            pref[i] += v[i];
        }
        while(Q--){
            long long L, R, k;
            cin >> L >> R >> k;
            long long ans = pref[n] - (pref[R]-pref[L-1]) + k*(R-L+1);
            if(ans % 2 != 0)cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
}