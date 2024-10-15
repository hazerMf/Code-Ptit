#include<iostream>
#include<vector>
#include<algorithm>
#include<iso646.h>
#include<bits/stdc++.h>
using namespace std;
int n, x[1000];
int ngang[1000], xuoi[1000], nguoc[1000];
vector<int> point;
int mt[21][21];

void dem(){
    int tong = 0;
    for(int i=1; i<=n; i++) tong += mt[i-1][x[i]-1] ;
    point.push_back(tong);
}

void tao(){
    for(int i=1; i<=n; i++) ngang[i] = 1;
    for(int i=1; i<=3*n; i++){
        xuoi[i] = 1;
        nguoc[i] = 1;
    }
}

void sinh(int i){
    for(int j=1; j<=n; j++){
        if(ngang[j]){
            x[i] = j;
            ngang[j]=0;
            xuoi[i-j+n] = 0;
            nguoc[i+j-1] = 0;
            if(i==n) dem();
            else sinh(i+1);
            ngang[j] = 1;
            xuoi[i-j+n] = 1;
            nguoc[i+j-1] = 1;
        }
    }
    
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        point.clear();
        cin >> n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> mt[i][j];
            }
        }
        tao();
        sinh(1);
        auto it = max_element(point.begin(),point.end());
        cout << *it << endl;
    }
}