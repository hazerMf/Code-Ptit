#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int n;
        cin >> n;
        queue<string> q;
        q.push("");
        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s.length()>n) break;
            if(s.length()==n){
                for(int i=0;i<s.size();i++){
                    cout << s[i];
                }
                cout << " ";
            }
            q.push(s+"A");
            q.push(s+"B");
        }
        cout << endl;
    }
}