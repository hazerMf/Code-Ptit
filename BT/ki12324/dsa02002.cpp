#include<bits/stdc++.h>
using namespace std;

void func(stack<queue<int>> &al,queue<int> q,int len){
	queue<int> newarr=q;
    al.push(q);
	if(len == 1) return;
	for(int i=0;i<len-1;i++){
		int a=newarr.front();
		newarr.pop();
		int b=newarr.front();
		newarr.push(a+b);
	}
	newarr.pop();
	func(al,newarr,len-1);
}

void print(queue<int> arr,int len){
    cout << "[";
	for(int i=0;i<len;i++){
		int a = arr.front();
		cout << a;
		if(i!=len-1){
			cout << " ";
		}
		arr.pop();
	}
	cout << "]";
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
        stack<queue<int>> al;
		func(al,arr,len);
        for(int i=1;i<=len;i++){
            queue<int> a=al.top();
            print(a,i);
            al.pop();
            cout << " ";
        }
		cout << endl;
	}
}