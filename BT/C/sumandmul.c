#include<stdio.h>
#include<math.h>

int main(){
    int num,run,i,sum,mul,a,b,check,digitcheck;
    scanf("%d", &run);
    for(i=0;i<run;i++){
        scanf("%d", &num);
        num = digitcheck;
        check = 0;
        sum = 0;
        mul = 1;
        while(digitcheck/10 != 0){
            digitcheck /= 10;
            check += 1;
        }
        while(check--){
            if(check%2==0){
                a = num%(10^check);
                sum += a;
            }else{
                b = num%(10^check);
                if(b!=0){
                    mul *= b;
                }
            }
        }
        printf("%d %d\n",&sum,&mul);
    }
}
