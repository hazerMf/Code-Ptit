#include<stdio.h>
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 

int main(){ 
    char s1[100]; 
    gets(s1); 
    char s2[100]; 
    scanf("%s",s2); 
    char *token = strtok(s1," "); 
    while ( token != NULL){ 
        if ( strcmp(s2,token)!=0){ 
            printf("%s ",token); 
        } 
        token=strtok(NULL," "); 
    } 
}