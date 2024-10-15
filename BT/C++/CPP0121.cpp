#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long int a,b;
        cin >> a >> b;
        cout << (a*b)/__gcd(a,b) << " " << __gcd(a,b) << endl;;
    }
}