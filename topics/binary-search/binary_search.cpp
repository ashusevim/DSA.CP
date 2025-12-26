#include<bits/stdc++.h>
using namespace std;

bool is_present(vector<int> v, int target, int n){
    int low = 0, high = n-1;
    while(low < high){
        int mid = low + (high-low)/2;
        if(v[mid] == target)return true;
        if(v[mid] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)cin >> v[i];
    int target;
    cin >> target;
    if(is_present(v, target, n)){
        cout << "Present";
    }
    else{
        cout << "Not found";
    }
}