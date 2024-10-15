#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    scanf("%d", &d);
    while(d--){
        a = 0;
        scanf("%d", &c);
        while(c /= 10 != 0){
            b = c%10;
            a += b;
            c /= 10;
        }
    printf("%d\n", a);
    }
}
