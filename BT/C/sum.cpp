#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0){
        printf("0");
    }else{
        printf("%d %d %d %.2f %d",a+b,a-b,a*b,(double)a/(double)b,a%b);
    }

}
