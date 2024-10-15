#include<stdio.h>
#include<string.h>

int main(){
    char name[501];
    scanf("%s",name);
    int len = strlen(name);
    int k = 0;
    for(int i=0;i<len-3;i++){
        if(name[i]=='.') k++;
    }
    if(k==0){
        if(name[len-3]=='.'&&(name[len-2]=='p'||name[len-2]=='P')&&(name[len-1]=='y'||name[len-1]=='Y')) printf("yes");
        else printf("no");
    }else printf("no");
}