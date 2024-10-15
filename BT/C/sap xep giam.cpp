#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
