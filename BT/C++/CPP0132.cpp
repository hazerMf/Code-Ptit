#include <bits/stdc++.h> 
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long n;
        cin >> n;
        int temp;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    temp = i;
                }
            }
        }
        if(n>1) cout << n;
        else cout << temp;
        cout << endl;
    }
}