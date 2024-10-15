#include <stdio.h>
#include <math.h>

int main(){
    long long F[100];
    F[0]=0;F[1]=1;
    for(int i=2;i<=92;i++){
        F[i]=F[i-1] + F[i-2];
    }
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int a,b;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++){
            printf("%lld ",F[i]);
        }
        printf("\n");
    }
}
