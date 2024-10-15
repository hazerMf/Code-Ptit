#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char so[1000];
    scanf("%s",&so);
    int len = strlen(so);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(so[i]<so[j]){
                int temp = so[i];
                so[i]=so[j];
                so[j]=temp;
            }
        }
    }
    printf("%s",so);
}