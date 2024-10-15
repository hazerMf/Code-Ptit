#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1000000000){
        printf("%d,%d,%d,%d",n/1000000000,(n/1000000)%1000,(n/1000)%1000,n%1000);
    }else if(n>= 1000000){
        printf("%d,%d,%d",n/1000000,(n/1000)%1000,n%1000);
    }else if(n>=1000){
        printf("%d,%d",n/1000,n%1000);
    }else{
        printf("%d",n);
    }
}
