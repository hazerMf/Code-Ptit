#include<stdio.h>
#include<math.h>
#include<string.h>

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

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char num[501];
        scanf("%s",num);
        int len = strlen(num);
        int so;
        int tong = 0;
        for(int i=0;i<len;i++){
            so = num[i] - '0';
            tong += so;
        }
        if(thuannghich(tong)&&tong>9) printf("YES\n");
        else printf("NO\n");
    }
}