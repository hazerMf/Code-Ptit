#include<stdio.h>
#include<math.h>
#include<string.h>

int nt(a){
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int tong(a){
    int b = a;
    int tong = 0;
    int fibo[17];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<=17;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    while(b>0){
        tong += b%10;
        b /= 10;
    }
    for(int i = 0;i<=17;i++){
        if(fibo[i]==tong) return 1;
        else if(fibo[i]>tong) return 0;
    }
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    if(a>b){
        int temp = a;
        a = b;
        b= temp;
    }
    for(int k = a;k<=b;k++){
        if(nt(k)&&tong(k)) printf("%d ",k);
    }
}
