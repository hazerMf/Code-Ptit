#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char input[20];
        scanf("%s",input);
        int len = strlen(input);
        int check = 0;
        for(int i=0;i<len;i++){
            if(input[i]!='1'&&input[i]!='2'&&input[i]!='0') check ++;
        }
        if(check==0){
            printf("YES\n");
        }else printf("NO\n");
    }
}