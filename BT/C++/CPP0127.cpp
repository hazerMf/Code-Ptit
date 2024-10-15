#include <bits/stdc++.h> 
using namespace std; 

int nt(int a){
    if(a<=1) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int pr(int n){
    for(int i=2;i<=n/2;i++){
        if(nt(i)&&nt(n-i)){
            cout << i << " " << n-i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

int main(){ 
    int runs; 
    cin >> runs; 
    while(runs--){ 
        int n; 
        cin>>n; 
        pr(n);
    } 
}