#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a*2<b){
            cout << a*n << endl;
        }else{
            if(n%2==0){
                cout << b*n/2 << endl;
            }else{
                cout << b*(n-1)/2+a << endl;
            }
        }
    }
}