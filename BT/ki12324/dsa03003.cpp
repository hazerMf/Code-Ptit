#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int sz;
        cin >> sz;
        int list[sz];
        for(int i=0;i<sz;i++){
            cin >> list[i];
        }
        sort(list,list+sz);
        long long sum=0;
        for(int i=0;i<sz;i++){
            long long a = list[i]*i;
            sum += a;
            sum = sum % mod;
        }
        cout << sum << endl;
    }
}