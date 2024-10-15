#include <stdio.h>
#include <math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int n;
        scanf("%d",&n);
        int chan = 0;
        int le = 0;
        while(n>0){
            int a;
            a = n%10;
        if(a%2==0){
            chan += 1;
        }else{
            le += 1;
        }
        n /= 10;
        }
    printf("%d %d\n",le,chan);
    }
}
