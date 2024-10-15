#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d,e,counter;
    scanf("%d", &d);
    while(d--){
        counter = 0;
        scanf("%d",&c);
        e = c;
        while(c /= 10 != 0){
            counter += 1;
            c /= 10;
        }

        a = e / pow(10,counter-1);
        b = e % 10;
        if(a==b){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}

