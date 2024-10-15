#include<bits/stdc++.h>
using namespace std;

void check(int *a,int *b){
    int score1,score2;
    cin >> score1 >> score2;
    if(score1>score2) *a+=3;
    else if(score1==score2){
        *a+=1;*b+=1;
    }else{
        *b+=3;
    }
}

int main(){
    int a=0,b=0,c=0;
    check(&a,&b);check(&a,&c);check(&b,&c);
    cout << a << " " << b << " " << c;
}