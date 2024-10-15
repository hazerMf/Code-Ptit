#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int list[100];
    for(int i =0;i<n;i++){
        scanf("%d",&list[i]);
    }
    for(int i=0;i<n;i++){
        int check = 1;
        for(int j=i+1;j<n;j++){
            if(list[j]==list[i]){
                list[j]=0;
            }
        }
    }
    for(int i =0;i<n;i++){
        if(list[i]!=0) printf("%d ",list[i]);
    }
}