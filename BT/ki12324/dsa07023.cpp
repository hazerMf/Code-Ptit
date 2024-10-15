#include<bits/stdc++.h>
using namespace std;

void in(string str){
    stringstream s(str); 
    string word; 
    stack<string> st;
    while (s >> word){
        st.push(word);
    }
    while(!st.empty()){
        string temp = st.top();
        st.pop();
        cout << temp << " ";
    }
    cout << endl;
}

int main(){
    int runs;
    cin >> runs;
    cin.ignore();
    while(runs--){
        string line;
        getline(cin,line);
        in(line);
    }
}

