#include<stdio.h>
#include<string.h>
int kt(char a[]){
	int dem=strlen(a);
	int i=0,j=dem-1;
	int check=0;
	for(i;i<j;i++){
		if(a[i]!='2' && a[i]!='3'&& a[i]!='5'&&a[i]!='7' )check ++;
		if(a[i]!=a[j-i])check++;
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
		if(kt(s)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}