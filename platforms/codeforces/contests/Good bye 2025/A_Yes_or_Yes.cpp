#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ns = 0, ys = 0;
        for(char c:s){
            if(c == 'Y')ys++;
            else ns++;
        }
        if(ns >= s.size()-1)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}