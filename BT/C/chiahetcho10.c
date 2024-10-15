#include <stdio.h>
#include <math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int sum = 0;
        int num;
        scanf("%d",&num);
        while(num>0){
            sum += num%10;
            num /= 10;
        }
        if(sum%10==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}