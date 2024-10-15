#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len,que;
        cin >> len >> que;
        int list[len];
        for(int i=0;i<len;i++){
            cin >> list[i];
        }
        while(que--){
            int a,b;
            cin >> a >> b;
            int sum = 0;
            for(int i=a-1;i<b;i++){
                sum += list[i];
            }
            cout << sum << endl;
        }
    }
}