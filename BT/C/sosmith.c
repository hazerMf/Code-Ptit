#include<stdio.h>
#include<math.h>

int tongchuso(a){
    int tong1 = 0;
    int b = a;
    while(b>0){
        tong1 += b%10;
        b /=10;
    }
    return tong1;
}

int tongnguyento(a){
    int tong2 = 0;
    int i =2,c=a;
    while(c>1){
        if(c%i==0){
            tong2 += tongchuso(i);
            c /= i;
        }else{
            i++;
        }
    } 
    return tong2;
}

int main(){
    int input;
    scanf("%d",&input);
    if(tongchuso(input)==tongnguyento(input)) printf("YES");
    else printf("NO");
}