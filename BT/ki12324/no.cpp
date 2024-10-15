#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool chk(string s,int des){
    int dem=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') dem++;
    }
    return dem == des;
}

void sinh(int len,int des,string s){
    if(s.length()==len&&chk(s,des)){
        for(int j=0;j<s.length();j++){
            if(s[j]=='1') cout << j+1 << " ";
        }
        cout << endl;
    }else if(s.length()>len){
        return;
    }else{
        sinh(len,des,s+"1");
        sinh(len,des,s+"0");
    }
}

int main(){
    int des,len;
    cin >> des >> len;
    string s="";
    sinh(len,des,s);
}