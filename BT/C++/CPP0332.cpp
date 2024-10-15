#include<stdio.h> 
#include<ctype.h> 

int main(){ 
    char s[100]; 
    while(scanf("%s", s) != EOF) { 
        printf("%c", tolower(s[0])); 
    } 
    for(int i=1;i<sizeof(s);i++) 
    printf("%c", tolower(s[i])); 
    printf("@ptit.edu.vn");
}