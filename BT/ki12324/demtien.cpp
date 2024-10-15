#include<bits/stdc++.h>
using namespace std;
int t25=0,t50=0;

bool check(int a){
    if(a==25){
        t25++;
        return 1;
    }else if(a==50){
        if(t25>0){
            t50++;
            t25--;
            return 1;
        }else{
            return 0;
        }
    }else if(a==100){
        if(t50>0&&t25>0){
            t50--;t25--;
            return 1;
        }else if(t25>2){
            t25-=3;
            return 1;
        }else{
            return 0;
        }
    }
}

int main(){
    int len;
    while(len--){
        int a;
        cin >> a;
        if(!check(a)){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}