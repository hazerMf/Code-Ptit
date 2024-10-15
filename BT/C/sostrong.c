#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    int com = n;
    while(n>0){
        int temp = n%10;
        int temp2 = 1;
        for(int i= 1; i <= temp;i++){
            temp2 *= i;
        }
        sum += temp2;
        n /= 10;
    }
    if(com == sum){
        printf("1");
    }else{
        printf("0");
    }
}