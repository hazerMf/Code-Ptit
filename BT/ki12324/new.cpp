#include<iostream>
#include<vector>
#include<string>
using namespace std;

void sinh(int len,string s,vector<string> &save){
    if(s.length()==len){
        save.push_back(s);
    }else{
        for(int i=0;i<2;i++){
            sinh(len,s+to_string(i),save);
        }
    }
}

int main(){
    int len;
    cin >> len;
    string s ="";
    vector<string> save;
    sinh(len,s,save);
    for(auto i:save){
        string temp = i;
        for(int j =0;j<temp.length();j++){
            cout << temp[j] << " ";
        }
        cout << endl;
    }
}