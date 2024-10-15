#include<stdio.h>
#include<math.h>

int main(){
    int a,b,sum,i,min,max;
    scanf("%d %d",&a,&b);
    sum = 0;
    if(a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    for(i=min;i<=max;i++){
        sum += i;
    }
    printf("%d",sum);
}
