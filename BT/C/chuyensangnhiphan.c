#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    }
    int bin[10],i=0;
    while(n>0){
        bin[i++]=n%2;
        n/=2;
    }
    for (int j = i-1; j >= 0; j--)
        printf("%d", bin[j]);

}