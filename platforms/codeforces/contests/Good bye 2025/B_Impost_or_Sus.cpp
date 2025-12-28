#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int current = 0, ans = 0;
        for(int i = 1; i<n-1; i++){
            if(s[i] == 'u'){
                current++;
            }
            else current = 0;
            if(current == 2){
                ans++;
                current = 0;
            }
        }
        if(s[0] == 'u')ans++;
        if(s[n-1] == 'u')ans++;

        cout << ans << '\n';
    }
}