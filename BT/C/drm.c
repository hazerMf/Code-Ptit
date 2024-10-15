#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char P[28]="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    int runs = 1;
    while(runs){
        int k;
        scanf("%d",&k);
        if(k==0) break;
        char input[1000];
        scanf("%s",input);
        int len = strlen(input);
        char mahoa[1000];
        for(int i=0;i<len;i++){
            for(int j=0;j<55;j++){
                if(input[i]==P[j]){
                    mahoa[i]=P[(j+k)%28];
                }
            }
        }
        for(int i=len-1;i>=0;i--){
            printf("%c",mahoa[i]);
        }
        printf("\n");
    }
}
