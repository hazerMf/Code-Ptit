#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    char line[201];
    while(runs--){
        gets(line);
        int dem = 1;
        char *token = strtok(line," ");
        while(token!=NULL){
            token = strtok(NULL," ");
            dem++;
        }
        printf("%d\n",dem);
    }
}