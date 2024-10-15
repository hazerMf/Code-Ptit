#include <bits/stdc++.h>
using namespace std;

void sol(int tong,vector<int> &remain,int curr,vector<int> &prefix,vector<vector<int>> &sav){
    if(curr==tong){
        for(auto i : prefix) cout << i << " ";
        cout << endl;
        sav.push_back(prefix);
    }
    else if(curr > tong) return;
    else if(remain.empty()) return;
    else{
        for(int i=0;i<remain.size();i++){
            vector<int> new_prefix = prefix,new_remain;
            new_prefix.push_back(remain[i]);
            for(int j=i+1;j<remain.size();j++){
                new_remain.push_back(remain[j]);
            }
            sol(tong,new_remain,curr+=remain[i],new_prefix,sav);
        }
    }
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int s,tong;cin>>s>>tong;
        vector<int> list(s);
        for(auto &i:list) cin >> i;
        vector<vector<int>> sav;
        vector<int> prefix;
        sol(tong,list,0,prefix,sav);
        cout << sav.size() << endl;
    }
}