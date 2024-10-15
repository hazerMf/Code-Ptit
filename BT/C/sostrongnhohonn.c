#include<stdio.h>
#include<math.h>

int sostrong(n){
    int sum = 0;
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
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int input;
    scanf("%d",&input);
    for(int i = 1;i<=input;i++){
        if(sostrong(i)) printf("%d ",i);
    }
}