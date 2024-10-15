#include <stdio.h>
#include <math.h>

int main()
{
    long a,b;
    scanf("%d %d",&a ,&b);
    if(a==0){
        if(b==0){
            printf("Vo so nghiem");
        }else {
            printf("Vo nghiem");
        }
    }else{
        printf("%.2f",-1*(float)b/(float)a);
    }
}
