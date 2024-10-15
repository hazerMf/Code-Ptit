#include<stdio.h>

int main(){
    int runs;
    scanf("%d",&runs);
    int dem = 1;
    while(runs--){
        printf("Test %d:\n",dem);
        int n;
        scanf("%d",&n);
        int list[100];
        int count[10000] = {0};
        for(int i =0;i<n;i++){
            scanf("%d",&list[i]);
            count[list[i]]++;
        }
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(list[j]==list[i]){
                    list[j]=9998;
                }
            }
        }
        for(int i =0;i<n;i++){
            if(list[i]!=9998){
                printf("%d xuat hien ",list[i]);
                printf("%d lan\n",count[list[i]]);
            }
        }
        dem++;
    }
}