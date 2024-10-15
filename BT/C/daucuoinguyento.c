#include <stdio.h>
#include <math.h>
#include <string.h>

int nt(a){
    for(int i =2; i<sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char num[501];
        scanf("%s",num);
        int len = strlen(num);
        int sodau1 = num[0] - '0';
        int sodau2 = num[1] - '0';
        int sodau3 = num[2] - '0';
        int socuoi1 = num[len-3] - '0';
        int socuoi2 = num[len-2] - '0';
        int socuoi3 = num[len-1] - '0';
        int sodau = sodau1*100 + sodau2*10+sodau3;
        int socuoi = socuoi1*100 + socuoi2*10 + socuoi3;
        if(nt(sodau)&&nt(socuoi)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

}