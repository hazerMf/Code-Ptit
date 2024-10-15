#include <stdio.h>


int main() {
    int num;
    scanf("%d", &num);
    int temp = num;
    for (int i = 0; i < num; i++) {
        temp--;
        for (int j = 0; j < temp; j++) {
            printf("~");
        }
        for (int l = 0; l < num; l++) {
            printf("*");
        }
        printf("\n");
    }
}