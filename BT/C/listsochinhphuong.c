#include <stdio.h>
#include <math.h>

int main(){
    int a,b,x,y,i,st,en;
    scanf("%d %d",&a,&b);
    while
    for(i=a;i<b;i++){
        x = sqrt(i);
        if(pow(x,2)==i){
            st=x;
            break ;break;
        }
    }
    for(i=b;i>a;i--){
        y = sqrt(i);
        if(pow(y,2)==i){
            en=y;
            break ;break;
        }
    }
    printf("%d\n",en-st+1);
    for(i=st;i<=en;i++){

        printf("%d\n",i*i);
    }

}
