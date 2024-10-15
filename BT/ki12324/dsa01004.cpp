#include<bits/stdc++.h>
using namespace std;

bool chk(string s,int n){
    int numck = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='1'){
            numck++;
        }
    }
    if(numck == n) return true;
    return false;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int t,n;
        cin >> t >> n;
        vector<int> nums;
        for(int i = 1;i<=t;i++){
            nums.push_back(i);
        }
        queue<string> q;
        q.push("");
        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s.length()>t) break;
            if(s.length()==t&&chk(s,n)){
                for(int i=0;i<s.size();i++){
                    if(s[i]=='1'){
                        cout << nums[i];
                }
            }
            cout << " ";
            }
            q.push(s+"1");
            q.push(s+"0");
        }
        cout << endl;
    }
}