#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[10000] = {0};
    for(int i=0;i<n;i++){
        int b;
        scanf("%d",&b);
        a[i] = b;
    }
    for (int i=0;i<n; i++) {
        b[a[i]]++;
    }
    int dem = 0;
    for(int i =0;i<n;i++){
        if(b[a[i]] == 1){
            dem++;
        }
    }
    printf("%d\n",dem);
    for (int i=0;i < n; i++) {
        if (b[a[i]] == 1){
            printf("%d ",a[i]);
            b[a[i]] = 0;
        }
    }
}
