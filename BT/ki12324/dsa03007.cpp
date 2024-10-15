#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int sz;cin>>sz;
        long long a[sz],b[sz];
        for(auto &i:a) cin >> i;
        for(auto &i:b) cin >> i;
        sort(a,a+sz);
        sort(b,b+sz);
        long long sum=0;
        for(int i=0;i<sz;i++){
            sum += a[i]*b[sz-i-1];
        }
        cout << sum << endl;
    }
}