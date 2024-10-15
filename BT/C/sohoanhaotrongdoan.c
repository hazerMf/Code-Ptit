#include<stdio.h>
#include<math.h>

int sohoanhao(n){
    int sum = 1;
    int i =2;
    if(n==1) return 0;
    while(i<=sqrt(n)){
        if(n%i==0){
            if(i==n/i){
                sum += i;
            }else{
                sum += i + n/i;
            }
        }
        i++;
    }
    if(sum==n){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int c = a;c<=b;c++){
        if(sohoanhao(c)){
            printf("%d ",c);
        }
    }
}


