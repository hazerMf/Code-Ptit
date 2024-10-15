#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        int list[len];
        for(int i=0;i<len;i++){
            cin >> list[i];
        }
        sort(list,list+len);
        for(int i=0;i<len;i++){
            cout << list[i] <<" ";
        }
        cout << endl;
    }
}