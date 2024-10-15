#include<stdio.h>
#include<math.h>

int gapdoi(int a, int b){
    if(a == b*2){
        return 1;
    }else if(b == a*2){
        return 1;
    }
    return 0;
}

int tn(long long n){
    int rev = 0,temp=n;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    if(temp == rev) return 1;
    else return 0;
}

int sodep(long long n){
    int socuoi = n%10;
    long long giua = 0;
    n /= 10;
    while(n>=10){
        giua = giua*10 + n%10;
        n /=10;
    }
    int sodau = n;
    if(tn(giua)/*&&gapdoi(sodau,socuoi)*/) return 1;
    else return 0;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long input;
        scanf("%d",&input);
        if(sodep(input)) printf("YES\n");
        else printf("NO\n");
    }
}
