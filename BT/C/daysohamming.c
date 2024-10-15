#include <stdio.h>
#include <math.h>

int nt(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int sohamming(int a){
    if(a<=5){
        return 1;
    }else{
        for(int j = 7;j<=sqrt(a);j++){
            if(nt(j)){
                if(a%j==0){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main(){
    long long hamming[100000];
    long long dem = 0;
    for(long long k=1;k<100000;k++){
        if(sohamming(k)){
            hamming[dem] = k;
            dem++;
        }
    }
    for(int i;i<1000;i++){
        printf("%d\n",hamming[i]);
    }
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int input;
        scanf("%d",&input);
        if(sohamming(input)){
            for(int l=0;l<=1000000;l++){
                if(hamming[l]==input){
                    printf("%d\n",l+1);
                    break;
                }
            }
        }else{
            printf("Not in sequence\n");
        }

    }
}
