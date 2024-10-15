#include <bits/stdc++.h>
using namespace std;
long long f[100];

int find(int n,long long k){
    long long mid = (long long)pow(2,n-1);
    if(k==mid) return n;
    else if(k<mid) return find(n-1,k);
    else return find(n-1,k-mid);
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int n;long long k;cin>>n>>k;
        cout << find(n,k) << endl;
    }
}