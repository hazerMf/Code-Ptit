#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int calls;cin >> calls;
    while(calls--){
        string a; cin >> a;
        if(a=="PUSH") {
            int a;cin>>a;
            q.push(a);
        }
        else if(a=="PRINTFRONT"){
            if(q.empty()) cout << "NONE" << endl;
            else{
                cout << q.front() << endl;
            }
        }
        else if(a=="POP"){
            if(q.empty()) continue;
            else q.pop();
        }
    }
}
