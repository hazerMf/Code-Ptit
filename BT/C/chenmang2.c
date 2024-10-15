#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    int dem =1;
    while(runs--){
        int a,b;
        int c;
        scanf("%d%d%d",&a,&b,&c);
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
        printf("Test %d:\n",dem);
        for(int i=0;i<c;i++){
            printf("%d ",mang1[i]);
        }
        for(int i=0;i<b;i++){
            printf("%d ",mang2[i]);
        }
        for(int i=c;i<a;i++){
            printf("%d ",mang1[i]);
        }
        dem++;
        printf("\n");
    }
}
