#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char line[100];
    char tu[100];
    scanf("%s",line);
    scanf("%s",tu);
    char *token = strtok(line,tu);
    printf("%s",token);
    while(token!=NULL){
        token = strtok(line,tu);
        printf("%s",token);
    }
}