#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i<n; i++)cin >> v[i];
        sort(v.begin(), v.end());
        int maxi = INT_MIN;
        int current = 1;
        for(int i = 1; i<n; i++){
            if((v[i] - v[i-1]) <= k){
                current++;
            }
            else{
                current = 1;
            }
            maxi = max(maxi, current);
        }
        if(maxi == INT_MIN)cout << 0 << '\n';
        else cout << abs(n - maxi) << '\n';
    }
}