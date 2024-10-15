#include<bits/stdc++.h>

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
        int zero =0;
        for(int i=0;i<len;i++){
            if(list[i]!=0){
                cout << list[i] << " ";
                zero++;
            }
        }
        while(zero--){
            cout << 0 << " ";
        }
        cout << endl;
        
    }
    cout << clock()/(double)1000<<"sec";
}