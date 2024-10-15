#include<iostream>
using namespace std;
int main(){
	int t,k=1000000007;
	cin >> t;
	while(t--){
		int n;
		long long x;
		cin >> n >> x;
		int h=n-1;
		long long a[n+5];
		long long sum=0,tempsum;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		while(n--){
			tempsum=1;
			for(int i=0;i<n;i++){
				tempsum*=x;
				tempsum=tempsum%k;
			}
			tempsum*=a[h-n];
			tempsum=tempsum%k;
			sum+=tempsum;
		}
		sum=sum%k;
		cout << sum << endl;
	}
	return 0;
}