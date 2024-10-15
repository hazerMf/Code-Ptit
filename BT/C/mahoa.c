#include <stdio.h>
#include <string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        char c[101];
        scanf("%s",&c);
        int len = strlen(c);
        for(int i=0;i<len;i++){
            int dem = 1;
            for(int j=i+1;j<len;j++){
                if(c[i]==c[j]){
                    dem++;
                    i++;
                }
            }
            printf("%c%d",c[i],dem);
        }
        printf("\n");
    }
}