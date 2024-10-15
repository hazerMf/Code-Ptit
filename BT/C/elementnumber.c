#include<stdio.h>
#include<math.h>

int main(){
    int run,num,i;
    scanf("%d",&run);
    while(run--){
        int check = 1;
        scanf("%d",&num);
        for(i=2;i<num;i++){
            if(num % i == 0){
                check = 0;
                break;
            }
        }
        if(check == 0){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
}
