#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        queue<int> q;
        int calls;cin >> calls;
        while(calls--){
            int a; cin >> a;
            if(a==1) cout << q.size() << endl;
            else if(a==2) cout << (q.empty() ? "YES" : "NO") << endl;
            else if(a==3){
                int temp;cin>>temp;
                q.push(temp);
            }else if(a==4){
                if(q.empty()) continue;
                else q.pop();
            }else if(a==5){
                if(q.empty()) cout << -1 << endl;
                else cout << q.front() << endl;
            }else if(a==6){
                if(q.empty()) cout << -1 << endl;
                else cout << q.back() << endl;
            }
        }
    }
}