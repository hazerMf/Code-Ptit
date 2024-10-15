#include<bits/stdc++.h>
using namespace std;

int nt(int a){
    if(a<=1) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int a;
    cin >> a;
    if(nt(a)) cout << "YES";
    else cout << "NO";
}