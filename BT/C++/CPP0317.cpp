#include<stdio.h>
#include<string.h>

int tn(char s[500]){
    int len = strlen(s);
    for(int i=0;i<(len/2)+1;i++){
        int check = s[i] -'0';
        if(check%2==0){
            if(s[i]!=s[len-i-1]){
                return 0;
            }
        }else{
            return 0;
        }
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char s[500];
        scanf("%s",&s);
        if(tn(s)){
            printf("YES\n");
        }else printf("NO\n");
    }
}