#include<bits/stdc++.h>

using namespace std;

void Go(){
    cout << "?";
    fflush(stdin);
    if(cin.get()=='.') exit(0);
}

bool Div11(string x){
    int n = x.length();
    x += "0";
    int tc = 0,tl = 0;
    for(int i=0;i<n;i+=2){
        tc += x[i] - '0';
        tl += x[i+1] - '0';
    }
    return (abs(tc-tl)%11)==0;
}

int main(){
    cout << Div11("12345678906");
}