#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int mt1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&mt1[i][j]);
        }
    }
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            printf("%d ",mt1[i][j]);
        }
        printf("\n");
    }
}
