#include <stdio.h>
#include <math.h>

int main() {
    int a,b,j,t,l;
    scanf("%d %d", &a,&b);
    int i = 0;
    int z = 1;
    for(z;z<=a;z++){
        for(t=0;t<i;t++){
            printf("~");
        }
        if(z == 1 || z == a){
            for(j=1;j<=b;j++){
                printf("*");
            }
        }else{
            printf("*");
            for(int l = 1; l <= b-2; l++){
                printf(".");
            }
            printf("*");
        }
        printf("\n");
        i++;
    }
}
