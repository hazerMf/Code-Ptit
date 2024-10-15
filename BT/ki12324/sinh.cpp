#include <bits/stdc++.h>
using namespace std;

int n,dem,a[100],fi=0;

void tao(){
    dem=1;
    a[1]=n;
}

void sinh(){
    int i=dem;
    while(i>=1&&a[i]==1){
        i--;
    }
    if(i==0){
        fi=1;
    }else{
        a[i]--;
        int d=dem-i+1;
        dem=i;
        int q=d/a[i],r=dem%a[i];
        for(int j=1;j<=q;j++){
            dem++;
            a[dem]=a[i];
        }
        if(r!=0){
            dem++;
            a[dem]=r;
        }
    }
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        cin>>n;
        tao();
        while(!fi){
            for(int i=1;i<=dem;i++){
                cout << a[i] << " ";
            }
            cout << endl;
            sinh();
        }
    }
}