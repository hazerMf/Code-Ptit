#include<bits/stdc++.h>
using namespace std;

void backtracking(vector<char>& prefix, vector<char>& remaining, vector<vector<char>>& permutation) {
    if(remaining.empty()){
        permutation.push_back(prefix);
    }else{
        for(int i =0 ;i<remaining.size();i++){
            int ele = remaining[i];
            vector<char> new_remaining,new_prefix = prefix;
            new_prefix.push_back(ele);
            for(auto j:remaining){
                if(j!= ele){
                    new_remaining.push_back(j);
                }
            }
            backtracking(new_prefix,new_remaining,permutation);
        }
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string s;
        cin >> s;
        vector<char> list;
        for(int i=0;i<s.length();i++){
            list.push_back(s[i]);
        }
        vector<vector<char>> permutation;
        vector<char> prefix;
        backtracking(prefix, list, permutation);
        for(int i=0;i<permutation.size();i++){
            for(int j=0;j<permutation[i].size();j++){
                cout << permutation[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }
}
