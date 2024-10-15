#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
        a = 1;
        scanf("%d", &c);
        while(c /= 10 != 0){
            b = c%10;
            a = a*b;
            c /= 10;
        }
    printf("%d\n", a);

}
