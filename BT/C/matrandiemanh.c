#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int max_num1 = max(a, b);
    int min_num1 = min(a,b);
    int max_num2 = max(c, max(d, e));
    int middle2 = c+d+e - max_num2 - min(c, min(d, e));
    if (max_num2 > max_num1) {
        if (middle2 > max_num1) {
            printf("%d",middle2);
        } else {
            printf("%d",max_num1);
        }
    } else {
        if (max_num2 < min_num1) {
            printf("%d",min_num1);
        } else {
            printf("%d",max_num2);
        }
    }
}