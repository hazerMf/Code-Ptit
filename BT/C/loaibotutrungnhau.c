#include<stdio.h>
#include<string.h>
int tim(char s[],char ds[100][50], int n){
	for(int i=0;i<n;i++)
		if(strcmp(s,ds[i])==0) return i;
		return -1;
}
main(){
	char ds[100][50],s[50];
	int n=0;
	while(scanf("%s",&s)!=-1){
		if(tim(s,ds,n)==-1){
			strcpy(ds[n++],s);
			printf("%s ",s);
		}
	}
}