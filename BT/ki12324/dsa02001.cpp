#include<bits/stdc++.h>
using namespace std;

void func(queue<int> q,int len){
	queue<int> newarr=q;
	cout << "[";
	for(int i=0;i<len;i++){
		int a = q.front();
		cout << a;
		if(i!=len-1){
			cout << " ";
		}
		q.pop();
	}
	cout << "]";
	if(len == 1) return;
	for(int i=0;i<len-1;i++){
		int a=newarr.front();
		newarr.pop();
		int b=newarr.front();
		newarr.push(a+b);
	}
	newarr.pop();
	cout << endl;
	func(newarr,len-1);
}

int main(){
	int runs;
	cin >> runs;
	while(runs--){
		int len;
		cin >> len;
		queue<int> arr;
		for(int i=0;i<len;i++){
			int a;
			cin >> a;
			arr.push(a);
		}
		func(arr,len);
		cout << endl;
	}
}