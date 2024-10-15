#include<stdio.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char in[18];
        scanf("%s",&in);
        int len = strlen(in);
        int out[18];
        for(int i=0;i<len;i++){
            out[i]=in[i]-'0';
        }
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(out[j]<out[i]){
                    int temp=out[j];
                    out[j]=out[i];
                    out[i]=temp;
                }
            }
        }
        for(int i=0;i<len;i++){
            if(out[i]!=0){
                printf("%d",out[i]);
            }
        }
        printf("\n");
    }
}