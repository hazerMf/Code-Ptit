#include<stdio.h>
#include<string.h>
int demtu(char s[]){
	int dem=0;
	char*p=strtok(s," ");
	while(p!=NULL){
		p = strtok(NULL," ");
		dem++;
	}
	return dem;
}
int main(){
	int t;
	char s[205];
	scanf("%d\n",&t);
	while(t--){
		gets(s);
		printf("%d\n",demtu(s));
	}
}
