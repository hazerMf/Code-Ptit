#include <bits/stdc++.h>
using namespace std;

int ks(int wt,int w[],int val[],int n){
    if (n == 0 || wt == 0) 
        return 0; 
    if (w[n - 1] > wt) 
        return ks(wt, w, val, n - 1); 
    else
        return max( 
            val[n - 1] 
                + ks(wt - w[n - 1], w, val, n - 1), 
            ks(wt, w, val, n - 1)); 
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int wt,sz;cin >> sz >> wt;
        int w[sz],val[sz];
        for(auto &i:w){
            cin >> i;
        }
        for(auto &i:val){
            cin >> i;
        }
        int n = sizeof(val) / sizeof(val[0]); 
        cout << ks(wt, w, val, n); 
    }
}