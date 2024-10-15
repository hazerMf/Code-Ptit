#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long solve(int n,int k){
    if(k==0) return 1;
    if(k==1) return n;
    long long x= solve(n,k/2);
    long long y= (x*x)%mod;
    if(k%2==0) return y;
    return (n*y)%mod;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
}