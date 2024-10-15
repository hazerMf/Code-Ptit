#include<bits/stdc++.h>
using namespace std;

int thuannghich(long long a){
    long long b = a,thuannghich = 0;
    while(b>0){
        thuannghich = thuannghich*10 + b%10;
        b/= 10;
    }
    if(thuannghich == a){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long int n;
        cin >> n;
        if(thuannghich(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}