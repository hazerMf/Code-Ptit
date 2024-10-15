#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char list[1001];
    gets(list);
    int len = strlen(list);
    int dem = 0;
    int out[501];
    if(len%2!=0) len -= 1;
    for(int i=0;i<len;i+=2){
        int a = list[i]-'0';
        int b = list[i+1]-'0';
        int x = a*10 + b;
        out[dem]=x;
        dem+=1;
    }
    for(int i=0;i<dem;i++){
        for(int j=i+1;j<dem;j++){
            if(out[i]>out[j]){
                int temp=out[j];
                out[j]=out[i];
                out[i]=temp;
            }
        }
    }
    for(int i=0;i<dem;i++){
        for(int k=i+1;k<dem;k++){
            if(out[i]==out[k]){
                out[k] = 999;
            }
        }
    }

    for(int i=0;i<dem;i++){
        if(out[i]!=999) printf("%d ",out[i]);
    }
}
