#include<bits/stdc++.h>
using namespace std;

void backtracking(vector<int>& prefix, vector<int>& remaining, vector<vector<int>>& permutation) {
    if(remaining.empty()){
        permutation.push_back(prefix);
    }else{
        for(int i =0 ;i<remaining.size();i++){
            int ele = remaining[i];
            vector<int> new_remaining,new_prefix = prefix;
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
    vector<int> nums={1,2,3,4,5,6};
    vector<vector<int>> permutation;
    vector<int> prefix;
    backtracking(prefix, nums, permutation);
    for(int i=0;i<permutation.size();i++){
        for(int j=0;j<permutation[i].size();j++){
            cout << permutation[i][j] << " ";
        }
        cout << endl;
    }
}