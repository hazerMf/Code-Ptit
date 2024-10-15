#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int list[100];
    for(int i =0;i<n;i++){
        scanf("%d",&list[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list[i]>list[j]){
                int temp = list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    printf("%d ",list[0]);
    int dem = 1;
    while(list[0]==list[dem]){
        dem++;
    }
    printf("%d",list[dem]);
}