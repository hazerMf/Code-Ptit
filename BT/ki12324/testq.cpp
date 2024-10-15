#include <bits/stdc++.h>
using namespace std;

int dem,n,x[1000];
int xuoi[1000]={},nguoc[1000]={},ngang[1000]={};

void check(int i){
    for(int j=1;j<=n;j++){
        if(!ngang[j]&&!xuoi[i+j-1]&&!nguoc[i-j+n]){
            x[i]=j;
            ngang[j]=1;
            xuoi[i+j-1]=1;
            nguoc[i-j+n]=1;
            if(i==n) dem++;
            else check(i+1);
            ngang[j]=0;
            xuoi[i+j-1]=0;
            nguoc[i-j+n]=0;
        }
    }
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        cin>>n;
        dem=0;
        check(1);
        cout<<dem<<endl;
    }
}