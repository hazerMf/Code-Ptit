#include <bits/stdc++.h>
using namespace std;

int f[100000]={1};

void sang(){
    f[0]=f[1]=0;
    for(int i=2;i<=sqrt(100000);i++){
        if(f[i]){
            for(int j=i*i;j<100000;j+=i){
                f[j]=0;
            }
        }
    }
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        
    }
}