#include<stdio.h>
#include<math.h>

int dk(int a){
    for(int i = 2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a,count =0;
        scanf("%d",&a);
        for(int i =2;i<=a-6;i++){
            if((dk(i)==1&&dk(i+2)==1&&dk(i+6)==1)||(dk(i)==1&&dk(i+4)==1&&dk(i+6)==1)){
                count++;
            }
        }
        printf("%d\n",count);
    }
}