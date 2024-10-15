#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long n,k;
        cin >> n >> k;
        long long sum=0;
        for(long long i=1;i<=n;i++){
            sum += i%k;
        }
        if(k==sum) cout << 1 << endl;
        else cout << 0 << endl;
    }
}