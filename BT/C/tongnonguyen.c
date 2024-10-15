#include <stdio.h>
#include <math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long a;
        scanf("%d",&a);
        long long sum ;
        sum = (1+a)*a;
        printf("%lld\n",sum/2);

    }
}
