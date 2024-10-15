#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&b);
        c = sqrt(b);
        if(c*c==b){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }
}