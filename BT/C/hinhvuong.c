#include<stdio.h>
#include<math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if( a-c==b-d ) printf("YES\n");
        else printf("NO\n");
    }
}
