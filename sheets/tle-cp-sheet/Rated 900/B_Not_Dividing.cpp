#include<bits/stdc++.h>
using namespace std;

int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
            if(v[i] == 1)v[i]++;
        }

        for(int i = 1; i<n; i++){
            if(v[i]%v[i-1] == 0){
                v[i]++;
            }
        }

        for(auto i:v)cout << i << " ";
        cout << '\n';
    }
}