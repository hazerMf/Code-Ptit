#include<stdio.h>
#include<math.h>

int nhap(int a[],int n){
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

int xuat(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int dem(int a[],int n){
    int i,b[10001]={0};
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    for(i=0;i<10000;i++){
        if(b[i]>0){
            printf("%d ",i);
        }
    }
}

int snt(int n){
    if(n<2){
        return 0;
    }
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int sapxep(int a[],int n){
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int a[100];
        int n;
        scanf("%d",&n);
        nhap(a,n);
        int b[100];
        int d = 0;
        for(int i=0;i<n;i++){
            if(snt(a[i])==1){
                b[d]=a[i];
                d+=1;
            }
        }
        sapxep(b,d);
        dem(b,d);
        printf("\n");
    }
}