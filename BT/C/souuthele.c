#include<stdio.h>
#include<math.h>

int sole(long long i){
    if(i%2!=0){
        return 1;
    }else{
        return 0;
    }
}

int uuthele(long long i){
    long long check = i;
    int le = 0,chan = 0;
    while(check>0){
        long long a = check%10;
        if(sole(a)){
            le+=1;
        }else{
            chan+=1;
        }
        check /= 10;
    }
    if(le>chan){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long i;
        scanf("%lld",&i);
        if(sole(i)&&uuthele(i)) printf("YES\n");
        else printf("NO\n");
    }
}
