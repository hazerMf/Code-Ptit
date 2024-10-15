#include<stdio.h>
#include<math.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        int i =2;
        scanf("%d",&n);
        while(n>1){
        if(n%i==0){
            printf("%d ",i);
            n = n/i;
        }else{
            i++;
        }
        }
    printf("\n");
    }

}
