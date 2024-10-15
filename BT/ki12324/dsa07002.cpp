#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    string s;
    int runs;
    cin >> runs;
    while(runs--){
        cin >> s;
        if(s=="PUSH"){
            int a;
            cin >> a;
            st.push(a);
        }else if(s=="POP"){
            if(st.empty()) continue;
            else st.pop();
        }else if(s=="PRINT"){
            if(st.empty()){
                cout << "NONE" << endl;
            }else{
                int lmao = st.top();
                cout << lmao << endl;
            }
        }
    }
}