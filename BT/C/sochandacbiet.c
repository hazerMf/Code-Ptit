#include <stdio.h>
#include <math.h>

int main(){
    int runs;
    scanf("%d", &runs);
    while(runs--){
        long long num;
        int check = 1;
        scanf("%lld",&num);
        while(num>0){
            int digit = num%10;
            if(digit%2==1){
                check = 0;
            }
            num /= 10;
        }
        if(check==0){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
}
