#include<stdio.h>
#include<math.h>

int main(){
    int len;
    scanf("%d",&len);
    float tong = 0;
    for(int i=0;i<len;i++){
        int a;
        scanf("%d",&a);
        tong +=a;
    }
    printf("%.3f",tong/len);
}