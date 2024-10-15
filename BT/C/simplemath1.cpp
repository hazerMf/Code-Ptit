#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d %d %.2f %d",a+b,a-b,a*b,(float)a/(float)b,a%b);
}
