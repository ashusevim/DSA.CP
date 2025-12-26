#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n == 0 || n == 1){
		cout << n << " ";
		return n;
	}
	int third = fib(n-1) + fib(n-2);
	cout << third << ' ';
	return third;
}

int main(){
	fib(5);
}
