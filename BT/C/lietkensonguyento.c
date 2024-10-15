#include <stdio.h>
#include <math.h>

int check(a){
    for(int i =2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int nums;
    scanf("%d",&nums);
    int so = 2;
    while(nums>0){
        if(check(so)){
            printf("%d\n",so);
            so++;
            nums--;
        }else{
            so++;
        }
        
    }
}
