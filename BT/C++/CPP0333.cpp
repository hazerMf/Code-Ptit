#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuanhoa(char s[]){
	int i;
	char *p=strtok(s," ");
	while(p!= NULL){
		p[0]=toupper(p[0]);
		for(i=1;i<strlen(p);i++){
			p[i]= tolower(p[i]);
		}
		printf("%s ",p);
		p=strtok(NULL," ");
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d\n",&t);
	char s[20000];
	while(t--){
		gets(s);
		chuanhoa(s);
	}
}