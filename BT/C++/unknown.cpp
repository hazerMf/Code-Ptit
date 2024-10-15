#include<iostream>
#include<cmath>
using namespace std;
int a(int k){
	int dem =0;
	while(k>0){
		int t=k%10;
		dem++;
		k/=10;
	}
	return dem;
}
int b(int k){
	if(k<2) return 0;
	for(int i=2;i<=sqrt(k);i++){
		if(k%i==0) return 0;
	}
	return 1;
}
int c(int k){
	int dao=0;
	while(k>0){
		dao=dao*10+k%10;
		k/=10;
	}
	if(b(dao)==1) return 1;
	return 0;
}
int d(int k){
	int cnt=0;
	while(k>0){
		int t=k%10;
		cnt+=t;
		k/=10;
	}
	if(b(cnt)==1) return 1;
	return 0;
}
int e(int k){
	int check=0;
	while(k>0){
		int t=k%10;
		if(b(t)!=1) check++;
		k=10;
	}
	if(check ==0) return 1;
	return 0;
}
int main(){
	int n;
	cin>>n;
	if(a(n)==n &&b(n)&&c(n)&&d(n)&&e(n)) cout<<"YES"<<'\n';
	else cout<<"no"<<'\n';
}