#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int mang1[100];
    int mang2[100];
    for(int i=0;i<a;i++){
        int x;
        scanf("%d",&x);
        mang1[i]=x;
    }
    for(int i=0;i<b;i++){
        int y;
        scanf("%d",&y);
        mang2[i]=y;
    }
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        printf("%d ",mang1[i]);
    }
    for(int i=0;i<b;i++){
        printf("%d ",mang2[i]);
    }
    for(int i=c;i<a;i++){
        printf("%d ",mang1[i]);
    }
}