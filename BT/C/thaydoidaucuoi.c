#include <stdio.h>
#include <math.h>

int main(){
    int input;
    scanf("%d",&input);
    int a = input;
    int dem = 0;
    int sokhong = 0;
    while(a>0){
        a/=10;
        dem++;
    }
    int b = input%10;
    input /= 10;
    int c = input/pow(10,dem-2);
    int e = pow(10,dem-2);
    int d = input%e;
    if(b==0) printf("%d%d",d,c);
    else printf("%d%d%d",b,d,c);
}