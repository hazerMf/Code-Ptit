#include<iostream>
using namespace std;
int n, x[1000];
int ngang[1000], xuoi[1000], nguoc[1000];

void xuat(){
    for(int i=1; i<=n; i++) cout << x[i] << " ";
    cout << endl;
}

void tao(){
    for(int i=1; i<=n; i++) ngang[i] = 1;
    for(int i=1; i<=3*n; i++){
        xuoi[i] = 1;
        nguoc[i] = 1;
    }
}

void sinh(int i,int &dem){
    for(int j=1; j<=n; j++){
        if(ngang[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
            x[i] = j;
            ngang[j]=0;
            xuoi[i-j+n] = 0;
            nguoc[i+j-1] = 0;
            if(i==n) dem++;
            else sinh(i+1,dem);
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
        int dem=0;
        cin >> n;
        tao();
        sinh(1,dem);
        cout << dem << endl;
    }
}