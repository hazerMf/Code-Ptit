#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int num[101];
        int so;
        scanf("%d",&so);
        for(int i=0;i<so;i++){
            int n;
            scanf("%d",&n);
            num[i] = n;
        }
        for(int i = 0;i<so;i++){
            if(num[i]%2==0) printf("%d ",num[i]);
        }
        printf("\n");
    }
}
