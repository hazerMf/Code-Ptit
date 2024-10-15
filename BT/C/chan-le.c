#include <stdio.h>
#include <math.h>

int kt(long long a){
    long long sum = 0;
    while(a!=0){
        long long b = a%10;
        sum += b;
        a /= 10;
    }
    if(sum%10==0){
        return 1;
    }
    return 0;
}

int ktr(long long a){
    int sum = 0;
    while(a!=0){
        long long b = a%10;
        sum += b;
        a/=10;
        long long n=a%10;
        long long x;
        if(n>b){
            x = n-b;
        }else{
            x = b-n;
        }
        if(x==2){
            return 1;
        }else{
            return 0;
            break;
        }
    }
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long n;
        scanf("%lld",&n);
        if(kt(n)==1&& ktr(n)==1){
            printf("YES\n");
        }else{
            printf("NO\n")
        }
    }
}
