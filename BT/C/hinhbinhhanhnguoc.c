#include <stdio.h>
#include <math.h>

int main() {
    int a,b,j,t;
    scanf("%d %d", &a,&b);
    int i = 0;
    while(a--){
        for(t=0;t<i;t++){
            printf("~");
        }
        for(j=1;j<=b;j++){
            printf("*");
        }
        printf("\n");
        i++;
    }
}
