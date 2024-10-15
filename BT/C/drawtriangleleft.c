#include<stdio.h>
#include<math.h>

int main(){
    int a,i,j,max;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        max = i;
        for(j=1;j<=max;j++){
            printf("*");
        }
        printf("\n");
    }
}
