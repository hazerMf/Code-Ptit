#include<bits/stdc++.h>
using namespace std;

int tn(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]) return 0;
    }
    return 1;
}

int main(){
    string s = "abc";
    push(s+"1");
    s.push("2");

}