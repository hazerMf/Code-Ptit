#include<stdio.h>
#include<math.h>

int giam(int i){
    int check = i;
    while(check>10){
        int last = check %10;
        int next = (check/10) % 10;
        if(last>=next){
            return 0;
        }
        check/=10;
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int a,b;
        scanf("%d%d",&a,&b);
        int dem = 0;
        for(int i=a;i<=b;i++){
            if(giam(i)) dem+=1;
        }
        printf("%d\n",dem);
    }
}

