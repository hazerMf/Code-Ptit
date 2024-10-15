#include<bits/stdc++.h>
using namespace std;

void sol(){
    string s;
    getline(cin,s);
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')') st.push(s[i]);
        else{
            bool ok = false;
            while(!st.empty()){
                char z=st.top();
                st.pop();
                if(z=='+'||z=='-'||z=='*'||z=='/') ok = true;
                else if(z=='(') break;
            }
            if(!ok){
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}

int main(){
    int runs;cin>>runs;
    cin.ignore();
    while(runs--){
        sol();
    }
}