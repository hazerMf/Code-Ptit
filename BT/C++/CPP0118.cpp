#include<iostream>
#include<math.h>
using namespace std;
int sp(int n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt>=2) return 0;
		if(cnt==1) dem++;
	}
	if(n!=1) dem++;
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(sp(n)==3) cout<<"1"<<'\n';
		else cout<<"0"<<'\n';
	}
	return 0;
}