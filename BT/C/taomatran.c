#include<stdio.h> 

int main(){ 
    int n; 
    scanf("%d",&n); 

    for(int i=0;i<n;i++){ 
        int dem=1; 
        for(int j=0;j<n;j++){ 
            if(j<=i) printf("0 "); 
            else printf("%d ",dem++); 
        } 
    printf("\n"); 
    } 
}