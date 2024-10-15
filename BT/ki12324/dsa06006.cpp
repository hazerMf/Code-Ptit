#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        int list[len];
        for(int i=0;i<len;i++) cin >> list[i];
        sort(list,list + len);
        for(auto i:list) cout << i << " ";
        cout << endl;
    }
}