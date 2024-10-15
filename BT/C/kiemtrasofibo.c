#include<stdio.h> 

int fibo(int n){ 
    int f0=0,f1=1,f,i=0; 
    while (i<n) { 
        if (f==n){
            return 1;
        } 
        f=f0+f1; 
        f0=f1; 
        f1=f; 
        i++; 
    }
    return 0; 
} 

int main(){ 
    int n; 
    scanf("%d",&n); 
    if (fibo(n)==1){ 
        printf("1"); 
    }else{printf("0");}
}