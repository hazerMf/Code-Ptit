#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    string s;
    while(cin >> s){
        if(s=="push"){
            int a;
            cin >> a;
            st.push(a);
        }else if(s=="pop"){
            st.pop();
        }else if(s=="show"){
            if(st.empty()){
                cout << "empty" << endl;
            }else{
                vector<int> v;
                stack<int> temp = st;
                while(!temp.empty()){
                    int a = temp.top();
                    v.push_back(a);
                    temp.pop();
                }
                for(int i=v.size()-1;i>=0;i--){
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    }
}