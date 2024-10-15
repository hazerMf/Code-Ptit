#include<stdio.h>
#include<math.h>

int main(){
    int num,check,digitcheck;
    check = 0;
    scanf("%d",&num);
    num = digitcheck;
    printf("%d",num);
    while(digitcheck/10 != 0){
        digitcheck /= 10;
        check += 1;
    }
    printf("%d",check);
}
