#include<stdio.h>
#include<math.h>

int nt(int i){
    if(i==1||i==0){
        return 0;
    }
    for(int j=2;j<sqrt(i);j++){
        if(i%j==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    int dem = 1;
    while(runs--){
        int len;
        scanf("%d",&len);
        int list[len];
        int book[9999]={0};
        for(int i =0;i<len;i++){
            scanf("%d",&list[i]);
        }
        int max=list[1];
        for(int i=0;i<len;i++){
            if(nt(list[i])){
                book[list[i]]++;
            }
            if(list[i]>max){
                max=list[i];
            }
        }
        printf("Test %d:\n",dem);
        for(int i=0;i<=max;i++){
            if(book[i]!=0){
                printf("%d xuat hien %d lan\n",i,book[i]);

            }
        }
        dem++;
    }
}