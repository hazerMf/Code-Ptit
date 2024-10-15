#include <stdio.h>
#include <math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long inputnum;
        int a;
        scanf("%lld", &inputnum);
        a = inputnum % 100;
        while(inputnum >= 100){
            inputnum /= 10;
        }
        if(inputnum==a){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}