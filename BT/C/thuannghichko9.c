#include <stdio.h>
#include <math.h>

int tn(int n){
    int m = n, dao = 0;
    while(n>0){
        dao = dao*10 + n%10;
        n /= 10;
    }
    return(dao == m);
}

int koco9(int n){
    while(n>0){
        int x = n%10;
        if(x == 9){
            return 0;
        }
        n/= 10;
    }
    return 1;
}


int main(){
    int n,i,j,d=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        j =i;
        if(tn(i)&& koco9(j)){
            printf("%d ",i);
            d++;
        }
    }
    printf("\n%d",d);
}

