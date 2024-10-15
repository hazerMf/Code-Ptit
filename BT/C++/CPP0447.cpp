#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a>>b;
        int list[a];
        for(int i=0;i<a;i++){
            cin >> list[i];
        }
        sort(list,list+a);
        for(int i=1;i<=b;i++){
            cout << list[a-i] << " ";
        }
        cout << endl;
    }
}