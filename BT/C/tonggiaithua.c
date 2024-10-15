#include <stdio.h>
#include <math.h>

int main(){
    int a;
    scanf("%d",&a);
    long long sum = 0;
    long long step = 1;
    int i = 1;
    for(i;i<=a;i++){
        step *= i;
        sum += step;
    }
    printf("%lld",sum);
}
