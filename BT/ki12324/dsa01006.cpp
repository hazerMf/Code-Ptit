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
    int runs;
    cin >> runs;
    while(runs--){
        int lim;
        cin >> lim;
        vector<int> nums;
        for(int i=lim;i>=1;i--){
            nums.push_back(i);
        }
        vector<vector<int>> permutation;
        vector<int> prefix;
        backtracking(prefix, nums, permutation);
        for(int i=0;i<permutation.size();i++){
            for(int j=0;j<permutation[i].size();j++){
                cout << permutation[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }
}
