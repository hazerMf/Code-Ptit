#include<stdio.h>
#include<math.h>

int main(){
    int runs,a,b,c,d,smaller,i;
    scanf("%d", &runs);
    while(runs--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        while(a!=b){
            if(a>b) a=a-b;
            else b=b-a;
        }
        while(c!=d){
            if(c>d) c=c-d;
            else d=d-c;
        }
        if(a==c) printf("YES\n");
        else printf("NO\n");
    }
}