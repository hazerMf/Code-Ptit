#include<stdio.h>
#include<math.h>

int main(){
    int a,x,y,inner;
    scanf("%d", &a);
    for(x=0;x<a;x++){
        if(x==a-1 || x==0){
            for(y=0;y<a;y++){
            printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for(inner=2;inner<a;inner++){
                printf(".");
            }
            printf("*\n");
        }
    }
}
