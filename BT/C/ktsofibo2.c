#include<stdio.h>
#include<math.h>

int fibo(long long n){ 
    long long f0=0,f1=1,f,i=0; 
    while (i<n) { 
        if (f==n){
            return 1;
        } 
        f=f0+f1; 
        f0=f1; 
        f1=f; 
        i++; 
    }
    return 0; 
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long i;
        scanf("%lld",&i);
        if(fibo(i)) printf("YES\n");
        else printf("NO\n");
    }
}

