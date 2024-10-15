#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    cin.ignore();
    while(runs--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        map<string, int> mp1;
        stringstream ss1(s1),ss2(s2);
        while(ss1>>s1){
            mp1[s1]++;
        }
        while(ss2>>s2){
            if(mp1.find(s2)!=mp1.end()) mp1.erase(s2);
        }
        for(auto it : mp1) cout << it.first << " ";
        cout << endl;
    }
}