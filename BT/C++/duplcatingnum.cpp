#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;
long long ucln(long long a,long long b){
	while(a!=b){
		if(a>b)a-=b;
		else b-=a;
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long k=ucln(x,y);
		for(int i=1;i<=k;i++){
			cout<<a;
		}
		cout<<'\n';
	}
	return 0;
}