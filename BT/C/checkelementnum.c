#include <stdio.h>
#include <math.h>

int main(){
    int n,i=2,d=0;
    scanf("%d",&n);
    while(d<n){
        if(songuyento(i)){
            printf("%d\n",i);
            d++;
        }
        i++;
    }

}

void songuyento(int a){
    int i;
    if(a<=3){
        return 1;
    }else{
        for(i=2;i<=sqrt(a);i++){
            if(a%i==0){
                return 0;
            }
        }
    }
    return 1;
}
