#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long len;
        cin >> len;
        long long list[len];
        for(long long i=0;i<len;i++){
            cin >> list[i];
        }
        long long count = 0;
        for(long long i=0;i<len;i++){
            if(list[i]!=0) cout << list[i] << " ";
            else count++;
        }
        while(count--){
            cout << 0 << " ";
        }
        cout << endl;
    }
}