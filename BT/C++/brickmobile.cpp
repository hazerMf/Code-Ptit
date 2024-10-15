#include<bits/stdc++.h> 
using namespace std; 

bool check(string s){
    int i = 0, e = s.length()-1;
    while(i<e){
        if(s[i]!=s[e]) return false;
        i++;
        e--;
    }
    return true;
}

string con(string s){
    string letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string num = "22233344455566677778889999";
    for(int i=0;i<s.length();i++){
        for(int j=0;j<letter.length();j++){
            if(toupper(s[i]) == letter[j]) s[i] = num[j];
        }
    }
    return s;
}

int main (){ 
    int runs;
    cin >> runs;
    while(runs--){
        string in;
        cin >> in;
        if(check(con(in))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}