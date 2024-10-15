#include<stdio.h>
#include<math.h>

int sohoanhao(n){
    int sum = 1;
    int i =2;
    while(i<=sqrt(n)){
        if(n%i==0){
            if(i==n/i){
                sum += i;
            }else{
                sum += i + n/i;
            }
        }
        i++;
    }
    if(sum==n){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int input;
    scanf("%d",&input);
    for(int a = 6;a<=input;a++){
        if(sohoanhao(a)){
            printf("%d ",a);
        }
    }
}


