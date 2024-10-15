#include <stdio.h>

int main() {
    int cot, hang;
    scanf("%d%d", &cot, &hang);
    for (int i = 1; i <= hang; i++) {
        for (int j = 1; j <= cot; j++) {
            if (i == 1 || i == hang) {
                printf("*");
            } else {
                if (j == 1 || j == cot) printf("*");
            } else printf(" ");

        }
        printf("\n");
    }

}
