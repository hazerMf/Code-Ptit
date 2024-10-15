#include<stdio.h>
#include<math.h>

int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%d\n%d\n%lld\n%d\n%d\n%.2f\n",a+b,a-b,a*b,a/b,a%b,(float)a/b);

}
