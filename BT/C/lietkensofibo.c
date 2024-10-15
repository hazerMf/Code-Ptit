#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int fibo[35];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<=30;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int j=0;j<n;j++){
        printf("%d ",fibo[j]);
    }
}
