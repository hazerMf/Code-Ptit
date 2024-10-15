#include<stdio.h>
#include<math.h>

int nt(int a){
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int so;
    scanf("%d",&so);
    int list[101];
    for(int i=0;i<so;i++){
        int a;
        scanf("%d",&a);
        list[i] = a;
    }
    int dem =0;
    int sont[101];
    for(int i=0;i<so;i++){
        if(nt(list[i])){
            sont[dem]=list[i];
            dem++;
        }
    }
    printf("%d ",dem);
    for(int i = 0;i<dem;i++){
        printf("%d ",sont[i]);
    }
}
