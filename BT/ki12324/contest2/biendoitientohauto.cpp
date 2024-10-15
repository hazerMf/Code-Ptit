#include<bits/stdc++.h>
using namespace std;

string s;
stack<string> st;

int main(){
    int runs;
    cin>>runs;
    while(runs--){
        cin >> s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                string x=st.top();
                st.pop();
                string y=st.top();
                st.pop();
                string z=x+y+s[i];
                st.push(z);
            }else st.push(string(1,s[i]));
        }
        cout << st.top();
        cout << endl;
    }
}