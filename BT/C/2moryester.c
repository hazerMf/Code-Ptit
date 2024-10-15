#include <stdio.h>
#include <math.h>

int main(){
    int dd,mm,yy,dy;
    scanf("%d %d %d", &dd,&mm,&yy);
    if(dd==1){
        if(mm==1){
            printf("Ngay mai: %d/%d/%d\n",2,mm,yy);
            printf("Hom qua: %d/%d/%d\n",31,12,yy-1);
        }else if( mm==5 || mm==7 || mm==8 || mm==10 || mm==12 ){
            printf("Ngay mai: %d/%d/%d\n",2,mm,yy);
            printf("Hom qua: %d/%d/%d\n",dd-1,mm-1,yy);
        }else if ( mm==2 || mm==4 || mm==6 || mm==9 || mm==11 ){
            printf("Ngay mai: %d/%d/%d\n",3,mm,yy);
            printf("Hom qua: %d/%d/%d\n",31,mm,yy);
        }else if ( mm==3 ){
            if(yy%4==0){
                dy = 29;
            }else{
                dy = 28;
            }
            printf("Ngay mai: %d/%d/%d\n",2,3,yy);
            printf("Hom qua: %d/%d/%d\n",dy,mm,yy);
        }
    }else if(dd==28 && mm==2){
        if(yy%4==0){
            printf("Ngay mai: %d/%d/%d\n",dd+1,mm,yy);
            printf("Hom qua: %d/%d/%d\n",dd-1,mm,yy);
        }else{
            printf("Ngay mai: %d/%d/%d\n",1,3,yy);
            printf("Hom qua: %d/%d/%d\n",27,2,yy);
        }
    }else if(dd==29 && mm==2){
        printf("Ngay mai: %d/%d/%d\n",1,3,yy);
        printf("Hom qua: %d/%d/%d\n",dd-1,mm,yy);
    }else if(dd==30){
        if(mm==4 || mm==6 || mm==9 || mm==11){
            printf("Ngay mai: %d/%d/%d\n",1,mm+1,yy);
            printf("Hom qua: %d/%d/%d\n",dd-1,mm,yy);
        }else if(mm==5 || mm==7 || mm==8 || mm==10 || mm==12){
            printf("Ngay mai: %d/%d/%d\n",dd+1,mm,yy);
            printf("Hom qua: %d/%d/%d\n",dd-1,mm,yy);
        }
    }else if(dd==31){
        if(mm==12){
            printf("Ngay mai: %d/%d/%d\n",1,1,yy+1);
            printf("Hom qua: %d/%d/%d\n",dd-1,mm,yy);
        }else{
        printf("Ngay mai: %d/%d/%d\n",1,mm+1,yy);
        printf("Hom qua: %d/%d/%d\n",dd-1,mm,yy);
        }
    }else{
        printf("Ngay mai: %d/%d/%d\n",dd+1,mm,yy);
        printf("Hom qua: %d/%d/%d\n",dd-1,mm,yy);
    }
}
