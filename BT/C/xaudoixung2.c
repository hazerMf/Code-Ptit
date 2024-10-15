#include<stdio.h>

int main(){
    char s[100001];
    gets(s);
    int len = strlen(s);
    printf("%d",len-1);
}