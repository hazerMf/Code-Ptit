#include<bits/stdc++.h>
using namespace std;

int check(int n){
    while(n>0){
        if(n%10!=8&&n%10!=6&&n%10!=0){
            return 0;
        }
        n/=10;
    }
    return 1;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int n;
        cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}