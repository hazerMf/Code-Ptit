#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char n[201];
    gets(n);
    int len = strlen(n);
    int temp[201];
    for(int i = 0;i<len;i++){
        int a = n[i] - '0';
        temp[i] = a;
    }
    int lista[101],listb[101];
    while(len>1){
        int alen = len/2;
        int blen = len - alen;
        for(int i = 0;i<alen;i++){
            lista[i] = temp[i];
        }
        for(int i = 0;i<blen;i++){
            listb[i] = temp[i+alen];
        }
        if(alen==blen){
            for(int i = 0;i<blen;i++){
                temp[i] = lista[i]+listb[+i];
            }
        }else{
            temp[0] = listb[0];
            for(int i = 1 ; i < blen ; i++){
                temp[i] = lista[i-1] + listb[i];
            }
        }
        for(int i = blen-1;i>0;i--){
            if(temp[i]>9){
                temp[i] = temp[i]-10;
                temp[i-1] += 1;
            }
        }
        len = blen;
        if(temp[0]>9){
            for(int i = blen;i>0;i--){
                temp[i]=temp[i-1];
            }
            temp[0] = 1;
            temp[1] -= 10;
            len+=1;
        }
        for(int i = 0;i<len;i++){
            printf("%d",temp[i]);
        }
        printf("\n");
    }
}
