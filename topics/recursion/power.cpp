#include<bits/stdc++.h>
using namespace std;

long long pow(long long x, long long y){
    if(y == 0) return 1;
    if(y % 2 == 0){
        return pow(x*x, y/2);
    } else {
        return x * pow(x, y/2) * pow(x, y/2);
    }
}

int main(){
    long long x, n;
    cin >> x >> n;
    cout << pow(x, n);
}
