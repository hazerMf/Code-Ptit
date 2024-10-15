#include<stdio.h>
#include<math.h>

int nt(int i){
    if(i==1||i==0) return 0;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int book[10000];
    int run = 2;
    while(n>1){
        if((n%run==0)&&nt(run)){
            while(n%run==0){
                n /= run;
                book[run]++;
                printf("%d ",n);
            }
        }else{
            run++;
        }
    }
    for(int i=2;i<=run;i++){
        if(book[i]!=0){
            printf("%d %d",i,book[i]);
        }
    }
}