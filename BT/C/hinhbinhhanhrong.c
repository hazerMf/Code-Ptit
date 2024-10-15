#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    int temp = num;
    for (int i = 0; i < num; i++) {
        temp--;
        for (int j = 0; j < temp; j++) {
            printf("~");
        }
        if(i == 0 || i == num-1){
            for (int l = 0; l < num; l++) {
                printf("*");
            }
        }else{
            printf("*");
            for (int l = 2; l < num; l++) {
                printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}
