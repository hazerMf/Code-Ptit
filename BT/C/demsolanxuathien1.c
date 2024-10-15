#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int list[100];
    int count[10000] = {0};
    for(int i =0;i<n;i++){
        scanf("%d",&list[i]);
        count[list[i]]++;
    }
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(list[j]==list[i]){
                list[j]=9999;
            }
        }
    }
    for(int i =0;i<n;i++){
        if(list[i]!=9999){
            printf("%d ",list[i]);
            printf("%d\n",count[list[i]]);
        }
    }
}