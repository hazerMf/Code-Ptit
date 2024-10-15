#include<stdio.h>
#include<math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int input;
        scanf("%d",&input);
        double tong = 0;
        if(input%2==0){
            for(int i = 2;i<=input;i+=2){
                tong += (double)1.0/i;
            }
            printf("%.6lf\n",tong);
        }else{
            for(int i = 1;i<=input;i+=2){
                tong += (double)1.0/i;
            }
            printf("%.6lf\n",tong);
        }
    }
}
