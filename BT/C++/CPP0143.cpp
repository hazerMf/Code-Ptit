#include <bits/stdc++.h>
using namespace std;

int main(){
    long long fibo[93];
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2;i<=92;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int runs;
    cin >> runs;
    while(runs--){
        int pos;
        cin >> pos;
        cout << fibo[pos-1] << endl;
    }
}