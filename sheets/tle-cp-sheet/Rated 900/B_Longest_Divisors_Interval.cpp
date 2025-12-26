#include<bits/stdc++.h>
using namespace std;

int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long curr = 1;
        while(n % curr == 0){
            curr++;
        }
        cout << curr-1 << '\n';
    }
}