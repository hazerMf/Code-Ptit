#include<stdio.h>
#include<math.h>

int main(){
    int a,i,j,max;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        max = i;
        if( i==1 || i==2 || i==a ){
            for(j=1;j<=max;j++){
            printf("*");
            }
        }else{
            printf("*");
            for(j=1;j<=max-2;j++){
            printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}

