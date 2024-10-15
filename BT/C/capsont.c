#include<stdio.h>
#include<math.h>

int nt(int a){
    if(a<2) return 0;
    for(int i =2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int num;
        scanf("%d",&num);
        for(int i = 2;i<=num/2;i++){
            if(nt(i)&&nt(num - i)){
                printf("%d %d ",i,num-i);
            }
        }
        printf("\n");
    }
}