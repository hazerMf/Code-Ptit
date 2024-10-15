#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
	int runs;
    scanf("%d",&runs);
    int mt[11][11];
    int test = 1;
    while(runs--){
        int a,b;
        scanf("%d%d",&a,&b);
        for(int i =0;i<b;i++){
            for(int j =0;j<a;j++){
                int a;
                scanf("%d",&a);
                mt[i][j]=a;
            }
        }
        printf("Test %d:\n",test);
        for(int i =1;i<b;i++){
            for(int j =1;j<a;j++){
                printf("%d ",mt[i][j]);
            }
            printf("\n");
        }
        test++;
    }
}