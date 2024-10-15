#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int check = 0;
        char num[500];
        scanf("%s",num);
        int len = strlen(num);
        for(int i = 2;i<=sqrt(len);i++){
            if(len%i==0){
                check ++;
            }
        }
        int nt = 0;
        int conlai = 0;
        for(int i=0;i<len;i++){
            if(num[i] == '2' || num[i] == '3' || num[i] == '5' || num[i] == '7'){
                nt += 1;
            }else{
                conlai += 1;
            }
        }
        if(nt>conlai&&check==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
