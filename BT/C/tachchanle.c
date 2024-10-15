#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int so;
    scanf("%d",&so);
    int num[101];
    for(int i=0;i<so;i++){
        int a;
        scanf("%d",&a);
        num[i]=a;
    }
    int le[101];
    int dem=0;
    for(int i=0;i<so;i++){
        if(num[i]%2==0){
            printf("%d ",num[i]);
        }else{
            le[dem]=num[i];
            dem++;
        }
    }
    printf("\n");
    for(int i=0;i<dem;i++){
        printf("%d ",le[i]);
    }
}
