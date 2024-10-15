#include<stdio.h>
#include<math.h>

int main(){
    int a,x,y;
    scanf("%d", &a);
    for(x=0;x<a;x++){
        for(y=0;y<a;y++){
            printf("*");
        }
        printf("\n");
    }
}
