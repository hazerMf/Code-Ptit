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
        int check[len];
        for(int i=0;i<len;i++){
            if(list[i]>=0&&list[i]<=len){
                check[list[i]]++;
            }
        }
        for(int i=0;i<len;i++){
            if(check[i]==0) cout << -1 << " ";
            else cout << i << " ";
        }
        cout << endl;
    }
}