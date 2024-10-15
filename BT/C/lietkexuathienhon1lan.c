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
        if(b[a[i]]>1) a[i]=0;
    }
    int dem = 0;
    for (int i=0;i < n; i++) {
        if (b[a[i]] > 1){
            dem++;
        }
    }
    printf("%d\n",dem);
    for (int i=1;i < n; i++) {
        
        printf("%d ",a[i]);
        
    }
}