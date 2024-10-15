#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    b = 1;
    scanf("%d",&a);
    while(a/10!=0){
        a /= 10;
        b+=1;
    }
    printf("%d",b);
}
