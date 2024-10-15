#include<bits/stdc++.h>
using namespace std;

int sum(int a){
    int tong=0;
    while(a>0){
        tong += a%10;
        a /=10;
    }
    if(tong>9) return sum(tong);
    else return tong;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        cout << sum(a) << endl;
    }
}