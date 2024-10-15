#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d,e;
    e = 0;
    scanf("%d",&a);
    b = a / 365;
    c = a % 365;
    d = c / 7;
    e = c % 7;
    printf("%d %d %d", b,d,e);
}