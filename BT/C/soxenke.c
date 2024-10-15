#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char num[501];
        scanf("%s",num);
        int len = strlen(num);
        int check = 0;
        if(len%2==0){
            check++;
        }else if(num[0]==num[1]){
            check++;
        }else{
            for(int i=2;i<len;i+=2){
                if(num[i]!=num[0]){
                    check++;
                }
            }
        }
        if(check==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}