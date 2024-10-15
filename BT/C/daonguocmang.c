#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int num[100];
    int so;
    scanf("%d",&so);
    for(int i=0;i<so;i++){
        int n;
        scanf("%d",&n);
        num[i] = n;
    }
    for(int i = so-1;i>=0;i--){
        printf("%d ",num[i]);
    }
}
