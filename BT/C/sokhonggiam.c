#include<stdio.h>
#include<math.h>

int khonggiam(int i){
    int check = i;
    while(check>0){
        int last = check %10;
        int next = (check/10) % 10;
        if(last<next){
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
        int n;
        scanf("%d",&n);
        int min,max;
        min = pow(10,n-1);
        max = pow(10,n);
        for(int i=min+1;i<max;i++){
            if(khonggiam(i)) printf("%d ",i);
        }
        printf("\n");
    }
}