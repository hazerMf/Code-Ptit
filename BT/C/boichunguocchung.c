#include<stdio.h>
int ucln(long long a, long long b){
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",(a*b)/ucln(a,b),ucln(a,b));
		
	}
	return 0;
}