#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long a,b;
        cin >> a >> b;
        long long list[a*b];
        for(long long i=0;i<a*b;i++){
            cin >> list[i];
        }
        sort(list,list + a*b);
        for(long long i=0;i<a*b;i++){
            cout << list[i] << " ";
        }
        cout << endl;
    }
}