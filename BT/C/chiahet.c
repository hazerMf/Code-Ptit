#include<stdio.h>
#include<math.h>

long long factorial(int n){  
    if (n == 0)  
        return 1;  
    else  
        return(n * factorial(n-1));  
}  

int main() {
    long long a,b;
    scanf("%lld %lld",&a,&b);
    long long A = 1;
    for(long long i=1;i<=a;i++){
        A *= i;
    }
    long long B = factorial(b);
    if(A%B==0){
        printf("YES");
    }else{
        printf("NO");
    }
}