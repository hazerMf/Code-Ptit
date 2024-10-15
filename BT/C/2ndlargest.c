#include <stdio.h>
#include <math.h>

int main(){
    int s1,s2,s3,s4,s5;
    int i;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    int n[] = {s1,s2,s3,s4,s5};
    int max1 = n[0];
    int max2;
    if(n[0]<n[1]){
        max1 = n[1];
        max2 = n[2];
    }else{
        max1 = n[2];
        max2 = n[1];
    }
    for(i=1;i<5;i++){
        if(n[i]>max1){
            max2 = max1;
            max1 = n[i];
        }else if(n[i]<max1 && n[i]>max2){
            max2 = n[i];
        }
    }
    printf("%d", max2);
}
