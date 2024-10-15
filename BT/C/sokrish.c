#include<stdio.h>
#include<math.h>

int krish(a){
    int tong = 0;
    int check = a;
    int b,i;
    while(a>0){
        int tich = 1;
        b = a%10;
        for(i=1;i<=b;i++){
            tich *= i;
        }
        tong += tich;
        a /= 10;
    }
    if(tong==check){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int input;
        scanf("%d",&input);
        if(krish(input)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}

