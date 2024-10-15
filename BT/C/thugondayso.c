#include <stdio.h>
#include <math.h>

int main(){
    int length;
    scanf("%d",&length);
    int A[length];
    for(int i = 0;i<length;i++){
        scanf("%d",&A[i]);
    }
    for(int t = 0;t<length-1;t){
        if((A[t]+A[t+1])%2==0){
            for(int j=t;j<length-2;j++){
                A[j]=A[j+2];
            }
            length -= 2;
            t = 0;
        }else{
            t++;
        }
    }
    printf("%d",length);
}
