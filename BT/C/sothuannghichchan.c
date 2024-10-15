#include<stdio.h>

int tn(int n){
    int rev = 0,temp=n;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return temp==rev;
}

int xuly(int n){
    int check =1;
    while(n/=10){
        if((n%10)%2==1){
            check = 0;
            break;
        }
    }
    if(check==1){
        return 1;
    }
    return 0;
}

int ktr(int n){
    int cnt=0,y;
    while(n!= 0){
        y=n%10;
        cnt++;
        n=n/10;
    }
    return cnt;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=22;i<n;i++){
            if(tn(i)&&ktr(i)%2==0&&xuly(i)){
                printf("%d ",i);
            }
        }
    printf("\n")
    }
}