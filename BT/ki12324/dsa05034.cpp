#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int n,k;cin>>n>>k;
        long long f[100001]={0};
        f[0]=1;
        long long temp=0;
        for(int i=1;i<=k;i++){
            f[i] = (temp+1) % mod;
            temp = (temp+f[i]) % mod;
        }
        for(int i=k+1;i<=n;i++){
            for(int j=1;j<=k;j++){
                f[i] = (f[i]+f[i-j]) % mod;
            }
        }
        cout << f[n] << endl;
    }
}