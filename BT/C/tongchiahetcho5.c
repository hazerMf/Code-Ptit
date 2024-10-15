#include<stdio.h>
#include<math.h>

int chia5(int a){
    int tong=0;
    int b=a;
    while(b>0){
        tong+=b%10;
        b/=10;
    }
    if((tong%10==0)||(tong%10==5)) return 1;
    else return 0;
}

int nt(int a){
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
	int t;
	scanf("%d",&t);
    int dem=0;
	for(int i =0;i<=t;i++){
        if(chia5(i)&&nt(i)){
            dem++;
            printf("%d ",i);
        }
    }
    printf("%d",dem);
}
