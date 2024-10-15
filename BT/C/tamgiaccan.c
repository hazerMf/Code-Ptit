#include<stdio.h>
#include<math.h>

int main(){
    int num;
    scanf("%d",&num);
    int dem = 0;
    for(int i = 0;i<num;i++){
        int space = num - i - 1;
        int j = i+1;
        int mid = dem + i + 1;
        while(space--){
            printf("  ");
        }
        if(i==0){
            printf("%d ",i+1);
            printf("\n");
        }else{
            for(j;j<=mid;j++){
                printf("%d ",j);
            }
            mid--;
            while(mid>=i+1){
                printf("%d ",mid);
                mid--;
            }
            printf("\n");
            mid += 2;
        }
    dem++;
    }
}
