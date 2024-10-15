#include<stdio.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int len;
        scanf("%d",&len);
        char s[200];
        scanf("%s",&s);
        int check = 1;
        for(int i=0;i<len;i++){
            if(s[i]!=s[len-i-1]){
                check=0;
            }
        }
        if(check==1) printf("YES\n");
        else printf("NO\n");
    }
}