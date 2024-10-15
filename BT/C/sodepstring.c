#include<stdio.h>
#include<math.h>
#include<string.h>

int nt(long long a){
    for(int i =2;i<sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char num[501];
        scanf("%s",num);
        int len = strlen(num);
        int check = 0;
        long tong = 0;
        for(int i = 0;i < len;i++){
            int so = num[i] - '0';
            if(i%2==0&&so%2!=0){
                check++;
            }else if(i%2!=0&&so%2==0){
                check++;
            }
            tong += so;
        }
        if(check==0&&nt(tong)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
