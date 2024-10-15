#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        for(char i:s){
            if(i == '(' ) st.push("0");
            else if(i == ')' ){
                string temp = "";
                string t = st.top();
                while(t!='('){

                }
            }else{
                st.push(i+"")
            }
        }
    }
}