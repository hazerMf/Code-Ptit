#include<stdio.h>
#include<math.h>

int tanggiam(a){
    int swtch = 0;
    int check = a;
    while(a>=10){
        int b = a%10;
        int c = (a/10)%10;
        if(swtch == 0){
            if(c>b){
                a/=10;
            }else if(b==c){
                return 0;
            }else if(c<b && a==check){
                return 0;
            }else{
                a/=10;
                swtch = 1;
            }
        }else if(swtch == 1){
            if(b>c){
                a/=10;
            }else{
                return 0;
            }
        }
    }
    if(swtch==1){
        return 1;
    }else if(swtch==0){
        return 0;
    }
}

int main(){
    int runs;
    scanf("%d",&runs);
    while(runs--){
        long long input;
        scanf("%d",&input);
        if(tanggiam(input)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}