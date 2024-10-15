#include<stdio.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char list[18];
        scanf("%s",&list);
        int len = strlen(list);
        int num[18];
        for(int i=0;i<len;i++){
            num[i] = list[i] - '0';
        }
        if(len%2!=0){
            printf("INVALID\n");
        }else{
            long long a =0,b=0;
            for(int i=0;i<len/2;i++){
                a = a*10+num[i];
                b = b*10+num[(len/2)+i];
            }
            long long tich = a*b;
            while(a!=b){
                if(a>b){
                    a = a-b;
                }else{
                    b = b-a;
                }
            }
            printf("%lld\n",tich/a);
        }
    }
}