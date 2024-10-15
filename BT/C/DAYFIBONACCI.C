#include <stdio.h>
#include <math.h>

int main() {
    int t,i,n;long long F[100];
    F[0]=0;F[1]=1;
    for(i=2;i<=92;i++){
        F[i]=F[i-1] + F[i-2];
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%lld\n",F[n]);
    }
}
