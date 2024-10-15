#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int size;
        cin >> size;
        queue<string> q;
        q.push("");
        vector<string> save;
        while(!q.empty()){
            string s;
            s = q.front();
            q.pop();
            if(s.length()>size) break;
            else if(s.length()>0) save.push_back(s);
            q.push(s+'6');
            q.push(s+'8');
        }
        cout << save.size() << endl;
        for(auto i:save) cout << i << " ";
        cout << endl;
    }
}