#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))


int main()
{
    int i, n;
    scanf("%d", &i);
    while (i--) {
        scanf("%d", &n);
        int arr[n], max = 0;
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            arr[i] = a;
            max = MAX(max, a);
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == max) {
                printf("%d ", i);
            }

        }

    }

    return 0;
}