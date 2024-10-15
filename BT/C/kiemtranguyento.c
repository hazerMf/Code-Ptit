#include <stdio.h>
#include <math.h>

int nt(int n){
    if(n<2) return 0;
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int nhap(int a[20][20],int m,int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

int main(){
    int a[20][20];
    int m,n;
    scanf("%d %d",&n,&m);
    nhap(a,m,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nt(a[i][j])){
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
        printf("\n ");
    }
}