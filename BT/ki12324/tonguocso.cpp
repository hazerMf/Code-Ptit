#include<bits/stdc++.h>
using namespace std;

int prime(int n){
	if(n=1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int sol(int n){
	float sum = 1;
	unordered_map<int,int> list;
	for(int i=2;i<=sqrt(n);i++){
		if(prime(i)&&n%i==0){
			int dem = 0;
			int demo = n;
			while(demo%n==0){
				demo /= n;
				dem++;
			}
			list.insert(i,dem);
		}
	}
	unordered_map<int, int>::iterator i = list.begin();
	while(i!=list.end()){
		int ov,un;
		ov = pow(i->first,i->second);
		ov--;
		un = i->first - 1;
		sum *= (ov/un);
	}
	if(sum>n) return 1;
	return 0;
}

main(){
	int a,b; 
	cin >> a >> b;
	int count = 0;
	for(int i=a; i<=b; i++){
		if(b < 12){
			cout << "0";
			return 0;
		}
		if(sol(i)){
			count++;
		}
	}
	cout << count;
}