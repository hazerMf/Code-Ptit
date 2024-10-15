#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int dem = 0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if((j+dem)>b){
                int c=dem+1;
                while(c--){
                    printf("%d",c);
                }
            }else{
                printf("%d",j+dem);
            }
        }
        dem++;
        printf("\n");
    }
}