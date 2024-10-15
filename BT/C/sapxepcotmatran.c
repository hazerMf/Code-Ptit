#include<stdio.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int n,m,i;
        scanf("%d%d%d",&n,&m,&i);
        int mt[n][m];
        for(int a=0;a<n;a++){
            for(int b=0;b<m;b++){
                scanf("%d",&mt[a][b]);
            }
        }
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                if(mt[a][i-1]>mt[b][i-1]){
                    int temp = mt[b][i-1];
                    mt[b][i-1] = mt[a][i-1];
                    mt[a][i-1] = temp;
                }
            }
        }
        for(int a=0;a<n;a++){
            for(int b=0;b<m;b++){
                printf("%d ",mt[a][b]);
            }
            printf("\n");
        }
    }
}