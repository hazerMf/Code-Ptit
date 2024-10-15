#include<stdio.h>
#include<math.h>

int nt(int a){
    if(a==0||a==1) return 0;
    for(int i =0;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int check(int a){
    int num = a;
    while(num>0){
        if(nt(num%10)){
            printf("");
        }else{
            return 0;
        }
        num/=10;
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int a,b;
        scanf("%d %d",&a,&b);
        int dem = 0;
        for(int i=a;i<=b;i++){
            if(nt(i)){
                if(check(i)){
                    dem++;
                }
            }
        }
        printf("%d\n",dem);
    }
}