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
        bool presentOld = false;
        bool presentNew = false;
        for(int i = 0; i < s.length(); i++) {
            for(int j = i; j < s.length(); j++) {
                string sub = s.substr(i, j-i+1);
                if(sub == "2025")presentOld = true;
                if(sub == "2026")presentNew = true;
            }
        }
        if(presentOld == false || presentNew == true && presentOld == true){
            cout << 0 << '\n';
        }
        else{
            cout << 1 << '\n';
        }
    }
}