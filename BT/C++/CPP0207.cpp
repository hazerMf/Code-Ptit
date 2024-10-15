#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len,swtch;
        cin >> len >> swtch;
        int list[len];
        for(int i=0;i<len;i++){
            cin >> list[i];
        }
        for(int i=swtch;i<len;i++){
            cout << list[i] << " ";
        }
        for(int i=0;i<swtch;i++){
            cout << list[i] << " ";
        }
        cout << endl;
    }
}