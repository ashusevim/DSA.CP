#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 1, current = 1;
        for(int i = 1; i<n; i++){
            if(s[i] == s[i-1]){
                current++;
            }
            else current = 1;
            maxi = max(maxi, current);
        }
        cout << maxi+1 << '\n';
    }
}