#include<stdio.h>
#include<math.h>

int check(int x){
    int y = x;
    int tong = 0;
    while(y>0){
        tong += y%10;
        y /= 10;
    }
    return tong;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(check(a)<=check(b)) printf("%d %d",a,b);
    else printf("%d %d",b,a);
}



