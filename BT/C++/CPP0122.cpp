#include <bits/stdc++.h> 
using namespace std; 

int main(){ 
    int runs; 
    cin >> runs; 
    while(runs--){ 
        int n; 
        cin>>n; 
        long long k=1; 
        for(long long i=1;i<=n;i++){ 
            k=k*i/__gcd(k,i); 
        } 
        cout << k << endl; 
    } 
}