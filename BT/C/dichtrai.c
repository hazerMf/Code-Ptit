#include<stdio.h>
#include<math.h>

int main(){
    int so;
    scanf("%d",&so);
    int list[101];
    for(int i=0;i<so;i++){
        int a;
        scanf("%d",&a);
        list[i] = a;
    }
    int dich;
    scanf("%d",&dich);
    for(int i=dich;i<so+dich;i++){
        if(i<so) printf("%d ",list[i]);
        else printf("%d ",list[i-so]);
    }
}
