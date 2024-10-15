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
        int a=0,b=len-1;
        while(a<=b){
            if(a==b){
                cout << list[b];
                break;
            }
            cout << list[b] << " " << list[a] << " ";
            a++;
            b--;
        }
        cout << endl;
    }
}