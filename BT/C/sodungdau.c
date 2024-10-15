#include<stdio.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int len;
        scanf("%d",&len);
        int list[1001];
        for(int i=0;i<len;i++){
            scanf("%d",&list[i]);
        }
        for(int i=0;i<len;i++){
            if(i==len-1){
                printf("%d",list[i]);
                break;
            }
            int valid=1;
            for(int j=i+1;j<len;j++){
                if(list[i]<=list[j]){
                    valid = 0;
                    break;
                }
            }
            if(valid==1){
                printf("%d ",list[i]);
            }
        }
        printf("\n");
    }
}