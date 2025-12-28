#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++)cin >> v[i];
        ll ops = n-1;
        ll x = 0;
        ll i = 0;
        ll j = 1;
        if(v[i] > 0 && v[j] < 0){
            x = x - v[j];
            j++;
            ops--;
        }
        if(n == 2){
            if((0-v[0]) > (0+v[1])){
                cout << 0-v[1] << '\n';
            }
            else{
                cout << 0+v[0] << '\n';
            }
            continue;
        }
        while(ops--){
            ll first = x + v[i];
            ll second = x - v[j];
            // cout << first << " " << second << '\n';
            if(first > second || v[i] < v[j]){
                i = j;
                j++;
                x = first;
            }
            else{
                j++;
                x = second;
            }
        }
        cout << x << '\n';
    }
}