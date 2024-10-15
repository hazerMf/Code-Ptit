#include<bits/stdc++.h>
using namespace std;

void check(int n,char a,char b,char c){
    if(n==1) cout << a << " -> " << c << endl;
    else{
        check(n-1,a,c,b);
        check(1,a,b,c);
        check(n-1,b,a,c);
    }
}

int main(){
    int n;
    cin >> n;
    check(n,'A','B','C');
}