#include "bits/stdc++.h"
using namespace std;

vector<int> qu;
int front = -1;

int dequeue(){
	if(front==-1 || front==qu.size()){
		front = -1;
		qu.clear();
		return -1;
	}
	int removed = qu[front];
	front++;
	return removed;
}

void enqueue(int element){
	if(front==-1)front = 0;
	qu.push_back(element);
}

void display(){
	for(int i = front; i<qu.size(); i++){
		cout << qu[i] << " ";
	}
	cout << '\n';
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	dequeue();
	display();
}
