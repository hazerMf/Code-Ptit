#include<stdio.h>
#include<string.h>
#include<ctype.h>

int chan(char s[]){
    int len = strlen(s);
    for(int i=0;i<len;i++){
        int a = s[i] - '0';
        if(a%2!=0) return 0;
    }
    return 1;
}

int tn(char s[]){
	int len = strlen(s);
    char tn[len-1];
    for(int i=0;i<len;i++){
        tn[i] = s[len-i-1];
    }
    return(strcmp(tn,s));
}

int main(){
	int runs;
    scanf("%d",&runs);
    char so[501];
    while(runs--){
        scanf("%s",so);
        if(tn(so)&&chan(so)) printf("YES\n");
        else printf("NO\n");
    }
}
