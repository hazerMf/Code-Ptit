#include<iostream>
#include<math.h>
using namespace std;
long long ucln(long long a, long long b){
	while(a!=b){
		if(a>b)a-=b;
		else b-=a;
	}
	return a;
}
long long bcnn(long long a,long long b){
	return (a*b)/ucln(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z,n;
		cin>>x>>y>>z>>n;
		long long a=pow(10,n-1);
		long long b=pow(10,n)-1;
		long long bcnn1=bcnn(bcnn(x,y),z);
		long long div=a/bcnn1;
		if(div*bcnn1==a)cout<<a<<'\n';
		else {
			long long re=(div+1)*bcnn1;
			if(re>=a&&re<=b) cout<<re<<'\n';
			else cout<<"-1"<<'\n';
		}
	}
	return 0;
}
