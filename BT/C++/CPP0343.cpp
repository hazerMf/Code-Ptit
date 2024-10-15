#include<bits/stdc++.h>
using namespace std;

int chan(int a){
    if(a%2==0) return 1;
    else return 0;
}

int le(int a){
    if(a%2==0) return 0;
    else return 1;
}

int check(int ck,int in){
    if(ck==1&&le(in)) return 1;
    else if(ck==0&&chan(in)) return 1;
    else return 0;
}

int countWords(string str){
    stringstream s(str);
    string word;
    s >> word;
    int temp = stoi(word);
    int ck;
    if(chan(temp)) ck = 0;
    else ck = 1;
    int count = 1;
    while (s >> word){
        if(ck==0&&le(stoi(word))) return 0;
        else if(ck==1&&chan(stoi(word))) return 0;
        count++;
    }
    if(count%2==0&&ck==0) return 1;
    else if(count%2==1&&ck==1) return 1;
    else return 0;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string str;
        getline(cin,str);
        countWords(str);
        cout << countWords(str) << endl;
    }
}