#include<stdio.h>
#include<string.h>

int tn(unsigned long long int n){
    unsigned long long int m = n, dao = 0;
    while(n>0){
        dao = dao*10 + n%10;
        n /= 10;
    }
    return(dao == m);
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char s[18];
        scanf("%s",&s);
        int len = strlen(s);
        int in[len];
        for(int i =0;i<len;i++){
            in[i] = s[i] -'0';
        }
        if((in[0]==in[len-1]*2)||(in[len-1]==in[0]*2)){
            unsigned long long int so;
            for(int i = 1;i<len-1;i++){
                so = so*10 + in[i];
            }
            if(tn(so)){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            printf("NO\n");
        }
    }
}