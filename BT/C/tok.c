#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s1[500];
    gets(s1);
    
    int dem = 0;
    char s2[500];
    gets(s2);
    strcat(s1,s2);
    printf("%s",s1);
    
}