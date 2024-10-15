#include<stdio.h>
#include<math.h>

int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    long c = a , d = b;
    while(c!=d){
        if(c>d){
            c = c - d;
        }else{
            d = d - c;
        }
    }
    long long i = a*b;
    printf("%lld\n",c);
    printf("%lld",i/c);
}