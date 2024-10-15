#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char num[501];
        scanf("%s",num);
        int len = strlen(num);
        int tong = 0;
        for(int i = 0;i<len;i++){
            int so = num[i] - '0';
            tong += so;
        }
        if(tong%3==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
