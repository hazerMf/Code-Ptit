#include<stdio.h> 

main(){ 
    int n; 
    scanf("%d",&n); 
    int i=0, CoSo=512, a[10]; 
    while(CoSo>0){ 
        if(n>=CoSo){ 
            a[i++]=1; 
            n -= CoSo; 
            CoSo /= 2; 
        }else{ 
            a[i++]=0; 
            CoSo /= 2; 
        } 
    } 
    int s=0, 
    T=1; 
    for(i=9 ; i>=0 ; i--){ 
        s += T*a[i]; 
        T *= 10; 
    } 
    printf("%d",s); 
}