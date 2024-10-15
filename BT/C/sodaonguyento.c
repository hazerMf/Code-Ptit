#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
    int temp;
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int xuly(int n){
    int sum = 0;
    while(n!=0){
        sum = sum *10 + (n%10);
        n=n/10;
    }
    return sum;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int n;
        scanf("%d",&n);
        int k=xuly(n);
        if(gcd(n,k)==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}