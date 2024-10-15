#include <bits/stdc++.h> 
using namespace std;

bool checktang(string s){
    for(int i=0;i<4;i++){
        if(s[i] >= s[i+1]) return false;
    }
    return true;
}

bool check(string s){
    for(int i=0;i<5;i++){
        if(s[i]!=s[0]) return false;
    }
    return true;
}

bool checkdaucuoi(string s){
    return s[0]==s[1]&&s[0]==s[2]&&s[3]==s[4];
}

bool check68(string s){
    for(char x : s){
        if(x!='6'&&x!='8') return false;
    }
    return true;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string in;
        cin >> in;
        string plate = in.substr(5,6);
        plate = plate.erase(3,1);
        if(checktang(plate)||check(plate)||checkdaucuoi(plate)||check68(plate)) cout << "YES" << endl;
        else cout<< "NO" << endl;
        
    }
}