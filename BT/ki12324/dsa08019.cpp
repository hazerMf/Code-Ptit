#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int size;
        cin >> size;
        queue<string> q;
        q.push("");
        stack<string> save;
        while(!q.empty()){
            string s;
            s = q.front();
            q.pop();
            if(s.length()>size) break;
            else if(s.length()>0) save.push(s);
            q.push(s+'6');
            q.push(s+'8');
        }
        cout << save.size() << endl;
        while(!save.empty()){
            string s = save.top();
            save.pop();
            cout << s << " ";
        }
        cout << endl;
    }
}