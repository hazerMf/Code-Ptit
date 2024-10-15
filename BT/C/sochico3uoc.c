#include<stdio.h>
#include<math.h>

int nt(int i){
    if(i==0||i==1) return 0;
    for(int j=2;j<sqrt(i);j++){
        if(i%j==0) return 0;
    }
    return 1;
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int a,b;
        scanf("%d%d",&a,&b);
        int dem = 0;
        for(int i=a;i<=b;i++){
            if(nt(sqrt(i))) dem++;
        }
        printf("%d\n",dem);
    }
}