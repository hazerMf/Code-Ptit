#include <stdio.h>
#include <string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long tich = 1;
        char num[501];
        scanf("%s",num);
        for(int i=0;i<strlen(num);i++){
            int so = num[i] - '0';
            if(so!=0){
                tich *= so;
            }
        }
        printf("%lld\n",tich);
    }
}
