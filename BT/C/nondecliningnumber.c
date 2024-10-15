#include<stdio.h>
#include<math.h>

int main(){
    int t;
    long long n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        int check = 1;
        while(n>=10){
            int a = n%10;
            int b = (n/10)%10;
            if(a>=b){
                n /= 10;
            }else{
                check = 0;
                break;
            }
        }
        if(check==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }

}

