#include<stdio.h>
#include<math.h>

int nt(long long n){
    long long dem = 0;
    for(int i=2;i<sqrt(n);i++){
        if(n % i == 0){
            dem ++;
        }
    }
    if(dem == 0){
        return 1;
    }
    return 0;
}

int daonguoc(long long n){
    long long sum = 0,x;
    while(n!=0){
        x=n%10;
        sum=sum*10+x;
        n=n/10;
    }
    if(nt(sum)){
        return 1;
    }
    return 0;
}

int tongcs(n){
    long long tong = 0,x;
    while(n!=0){
        x = n %10;
        tong += x;
        n = n/10;
    }
    if(nt(tong)){
        return 1;
    }
    return 0;
}

int tach(n){
    int x;
    int check = 1;
    while(n/=10){
        x=n%10;
        if(nt(x)==0){
            check=0;
            break;
        }
    }
    if(check==1){
        return 1;
    }
    return 0;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long test;
        scanf("%lld",&test);
        if( nt(test) && daonguoc(test) && tongcs(test) && tach(test) ){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    
}
