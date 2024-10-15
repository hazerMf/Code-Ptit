#include<stdio.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int len;
        scanf("%d",&len);
        int list[31];
        for(int i=0;i<len;i++){
            scanf("%d",&list[i]);
        }
        int dem=0;
        for(int i=0;i<len;i++){
            if(list[i]==list[i+1]) dem++;
        }
        printf("%d\n",dem);
    }
}