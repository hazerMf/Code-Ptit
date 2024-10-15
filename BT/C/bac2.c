#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    if(a==0){
        if(b==0){
            printf("NO");
        }else{
            printf("%.2f",-b/c);
        }
    }else{
        delta = b*b - 4*a*c;
        if(delta > 0){
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf("%.2f %.2f",x2,x1);
        }else if(delta == 0){
            x1 = -b / (2*a);
            printf("%.2f",x1);
        }else{
            printf("NO");
        }
    }
}
