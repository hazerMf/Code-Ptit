#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> q;
    int calls;cin >> calls;
    while(calls--){
        string a; cin >> a;
        if(a=="PUSHFRONT") {
            int a;cin>>a;
            q.push_front(a);
        }else if(a=="PUSHBACK"){
            int a;cin>>a;
            q.push_back(a);
        }else if(a=="PRINTFRONT"){
            if(q.empty()) cout << "NONE" << endl;
            else cout << q.front() << endl;
        }else if(a=="PRINTBACK"){
            if(q.empty()) cout << "NONE" << endl;
            else cout << q.back() << endl;
        }else if(a=="POPFRONT"){
            if(q.empty()) continue;
            else q.pop_front();
        }else if(a=="POPBACK"){
            if(q.empty()) continue;
            else q.pop_back();
        }
    }
}