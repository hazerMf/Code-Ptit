#include <stdio.h>
#include <math.h>

int main(){
    int s1,s2,s3,min,i;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1<=s2 && s1<=s3){
        printf("%d",s1);
    }else if(s2<=s1 && s2<=s3){
        printf("%d",s2);
    }else if(s3<=s1 && s3<=s2){
        printf("%d",s3);
    }
}
