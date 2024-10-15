#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin >> len;
    int list[len];
    for(int i=0;i<len;i++){
        cin >> list[i];
    }
    vector<int> mp;
    for(auto i: list){
        if(mp.find(i) != mp.end()){
            cout <<  1;
            return 0;
        }
        mp.push_back(i);

    }
    cout << 0;
    return 0;
}