#include<stdio.h>
#include<math.h>

int main(){
    int runs,a,b,smaller,i;
    scanf("%d", &runs);
    while(runs--){
        scanf("%d %d",&a,&b);
        if(a>b){
            smaller = b;
        }else{
            smaller = a;
        }
        for(i=smaller;i>=1;i--){
            if(a%i == 0 && b%i ==0){
                printf("%d\n",i);
                break;
            }
        }
    }
}
