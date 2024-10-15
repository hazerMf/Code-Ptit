#include<stdio.h>
#include<math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long i;
        scanf("%lld",&i);
        int max = i%10;
        int min = i%10;
        while(i>0){
            if((i%10)>max){
                max = i%10;
            }else if((i%10)<min){
                min = i%10;
            }
            i/=10;
        }
        printf("%d %d\n",max,min);
    }
}
