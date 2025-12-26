#include "bits/stdc++.h"
using namespace std;

vector<int> st;

int pop(){
	if(st.empty()){
		return -1;
	}
	int removed = st[st.size()-1];
	st.pop_back();
	return removed;
}

int top(){
	if(st.empty())return -1;
	return st[st.size()-1];
}

bool empty(){
	return st.empty();
}

void push(int element){
	st.push_back(element);
}

void display(){
	for(int i = st.size()-1; i>=0; i--){
		cout << st[i] << " ";
	}
	cout << '\n';
}

int main(){
	push(10);
	push(20);
	pop();
	display();
}
