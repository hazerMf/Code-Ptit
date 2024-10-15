#include<stdio.h>
#include<math.h>

int main(){
    int a,b,i,t,inner;
    scanf("%d %d", &a,&b);
    for(i=b;i>0;i=i-1){
        if(i==b || i==1){
            for(t=1;t<=a;t++){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for(inner=2;inner<a;inner++){
                printf(" ");
            }
            printf("*\n");
        }

    }
}
