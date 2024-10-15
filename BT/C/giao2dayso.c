#include<stdio.h>
#include<math.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100],b[100],c[1000];
    for(int i=0;i<1000;i++){
        c[i]=0;
    }
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<m;i++){
        scanf("%d",&b[i]);
        for(int j = 0;j<n;j++){
            if(a[j]==b[i]){
                c[b[i]]++;
            }
        }
    }
    for(int i=0;i<1000;i++){
        if(c[i]>0){
            printf("%d ",i);
        }
    }
}