#include<bits/stdc++.h>

using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        unordered_set<int> chk;
        int g=0,temp;
        for(int i=0;i<len;i++){
            int a;
            cin >> a;
            if(g==0){
                if(chk.find(a)==chk.end()){
                    chk.insert(a);
                }else{
                    g=1;
                    temp = a;
                }
            }
        }
        if(g==0) cout << -1 << endl;
        else cout << temp << endl;
    }
}