#include <stdio.h>
#include <math.h>

int thuannghich(long long a){
    long long b = a,thuannghich = 0;
    while(b>0){
        thuannghich = thuannghich*10 + b%10;
        b/= 10;
    }
    if(thuannghich == a){
        return 1;
    }else{
        return 0;
    }
}

int sole(long long a){
    long long c = a;
    while(c>10){
        int d = c%10;
        if(d%2==0){
            return 0;
        }else{
            c /= 10;
        }
    }
    return 1;
}

int tong(long long a){
    int tong = 0;
    long long e = a;
    while(e>0){
        tong += e%10;
        e /= 10;
    }
    if(tong%2!=0) return 1;
    else return 0;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long input;
        scanf("%lld",&input);
        if(tong(input)&&sole(input)&&thuannghich(input)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
