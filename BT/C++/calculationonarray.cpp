#include<bits/stdc++.h>
using namespace std;

long long p(long long a,long long b){
    long long x=1,count=1;
    while(count<=b){
        x=x*a;
        x=x%1000000007;
        count++;
    }
    return x;
}

long long gcdarr(long long a[],long long n){
    long long res=a[0];
    for(long long i=1;i<n;i++){
        res=__gcd(a[i],a[0]);
        if(res==1) return 1;
    }
    return res;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long n;
        cin >> n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin >> a[i];
        }
        long long tich = 1;
        for(long long i=0;i<n;i++){
            tich *= a[i];
            tich=tich%1000000007;
        }
        long long res = p(tich,gcdarr(a,n))%1000000007;
        cout << res << endl;
    }
}