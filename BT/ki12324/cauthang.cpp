#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int n,k;cin>>n>>k;
        int f[100005];
        f[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k&&j<=i;j++){
                f[i]+=f[i-j];
                f[i]%=mod;
            }
        }
        cout << f[n] << endl;
    }
}