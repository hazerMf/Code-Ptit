#include<stdio.h>
#include<math.h>

int sochan(long long i){
    if(i%2==0){
        return 1;
    }else{
        return 0;
    }
}

int uuthechan(long long i){
    long long check = i;
    int le = 0,chan = 0;
    while(check>0){
        long long a = check%10;
        if(sochan(a)){
            chan+=1;
        }else{
            le+=1;
        }
        check /= 10;
    }
    if(le<chan){
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
        if(sochan(i)&&uuthechan(i)) printf("YES\n");
        else printf("NO\n");
    }
}
