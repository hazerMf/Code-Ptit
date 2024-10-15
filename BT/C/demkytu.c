#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    gets(s);
    int chu = 0;
    int so = 0;
    int khac = 0;
    for(int i=0;i<strlen(s);i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) chu++;
        else if(s[i]>='0'&&s[i]<='9') so++;
        else khac++;
    }
    printf("%d %d %d",chu,so,khac);
}