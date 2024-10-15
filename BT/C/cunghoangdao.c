#include <stdio.h>
#include <math.h>

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(b==1){
            if(a<=19){
                printf("Ma Ket\n");
            }else{
                printf("Bao Binh\n");
            }
        }else if(b==2){
            if(a<=18){
                printf("Bao Binh\n");
            }else{
                printf("Song Ngu\n");
            }
        }else if(b==3){
            if(a<=20){
                printf("Song Ngu\n");
            }else{
                printf("Bach Duong\n");
            }
        }else if(b==4){
            if(a<=19){
                printf("Bach Duong\n");
            }else{
                printf("Kim Nguu\n");
            }
        }else if(b==5){
            if(a<=20){
                printf("Kim Nguu\n");
            }else{
                printf("Song Tu\n");
            }
        }else if(b==6){
            if(a<=20){
                printf("Song Tu\n");
            }else{
                printf("Cu Giai\n");
            }
        }else if(b==7){
            if(a<=22){
                printf("Cu Giai\n");
            }else{
                printf("Su Tu\n");
            }
        }else if(b==8){
            if(a<=22){
                printf("Su Tu\n");
            }else{
                printf("Xu Nu\n");
            }
        }else if(b==9){
            if(a<=22){
                printf("Xu Nu\n");
            }else{
                printf("Thien Binh\n");
            }
        }else if(b==10){
            if(a<=22){
                printf("Thien Binh\n");
            }else{
                printf("Thien Yet\n");
            }
        }else if(b==11){
            if(a<=22){
                printf("Thien Yet\n");
            }else{
                printf("Nhan Ma\n");
            }
        }else if(b==12){
            if(a<=21){
                printf("Nhan Ma\n");
            }else{
                printf("Ma Ket\n");
            }
        }
    }
}