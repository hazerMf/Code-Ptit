#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int L,R;
		cin>>L>>R;
		int k=-1;
		for(int i=L;i<R;i++){
			if(a[i]>a[i+1]){
				k=i;
				break;
			}
		}
		if(k!=-1){
			for(int i=k;i<R;i++){
				if(a[i]<a[i+1]){
					k=-2;
					break;
				}
			}
		}
		if(k==-2)cout<<"No"<<'\n';
		else cout<<"Yes"<<'\n';
	}
	return 0;
}