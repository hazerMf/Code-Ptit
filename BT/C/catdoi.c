#include<stdio.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int valid = 1;
        char s[20];
        scanf("%s",&s);
        int len = strlen(s);
        int in[20],out[20];
        for(int i=0;i<len;i++){
            in[i] = s[i] - '0';
        }
        for(int i=0;i<len;i++){
            if(in[i]==0||in[i]==8||in[i]==9){
                out[i]=0;
            }else if(in[i]==1){
                out[i]=1;
            }else{
                valid = 0;
                break;
            }
        }
        int num0 = 0;
        for(int i =0;i<len;i++){
            if(out[i]==0){
                num0++;
            }
        }
        if(num0==len){
            valid=0;
        }
        if(valid==0){
            printf("INVALID\n");
        }else{
            unsigned long long int so = 0;
            for(int i=0;i<len;i++){
                so = so*10 + out[i];
            }
            printf("%llu\n",so);
        }
    }
}
