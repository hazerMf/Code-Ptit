#include<bits/stdc++.h>

using namespace std;
const int MN = 20;
int v[MN];

void Print(int c,int n){
    for(int i=1;i<=n;i++){
        cout << v[i] << " " ;
    }
    cout << endl;
}

bool Place(int k,int i){
    for(int j=1;j<k;j++){
        if(v[j]==i||k-j==abs(v[j]-i)) return false;
    }
    return true;
}

int Find(int n,int k){
    for(int i=v[k]+1;i<=n;++i){
        if(Place(k,i)) return i;
    }
    return 0;
}

void sol(int n){
    fill(v, v+n+1, 0);
    int k = 1;
    int c=0;
    while(true){
        if(k>n){
            c++;
            Print(c,n);
            return;
        }
        v[k] = Find(n,k);
        if(v[k] >0) k++;
        else k--;
    }
}

void Queen(int i){
    sol(i);
}

int main(){
    int a,sn;
    cin >> a ;
    Queen(a);
}
