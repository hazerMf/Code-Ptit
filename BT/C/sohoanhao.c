#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    int i =1;
    while(i<n){
        if(n%i==0){
            sum += i;
        }
        i++;
    }
    if(sum==n){
        printf("1");
    }else{
        printf("0");
    }
}
