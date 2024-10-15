#include<stdio.h>
#include<string.h>
int chuso(char a[]){
	int tong=0;
	for(int i=0;i<strlen(a);i++){
		tong=tong+a[i]-48;
	}
	if(tong%10==0)return 1;
	return 0;
}
int kt(char a[]){
	int dem=strlen(a);
	int i=0,j=dem-1;
	int check=0,dem1=0,dem2=0;
	int tong=0;
	if(a[0]==8 || a[strlen(a)-1]==8){
		for(i;i<j;i++){
			if(a[i]%2!=0) check++;
			if(a[i]!=a[j-i])check++;
		}
	}
	if(check==0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000];
		scanf("%s",s);
		if(kt(s)==1 && chuso(s)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}