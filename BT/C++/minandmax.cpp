#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll m(char *s){
    ll res =0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='6') res = res*10+5;
        else res = res*10 +s[i] - '0';
    }
    return res;
}

ll M(char *s){
    ll res =0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='5') res = res*10+6;
        else res = res*10 +s[i] - '0';
    }
    return res;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        char num1[20],num2[20];
        cin >> num1 >> num2;
        cout << m(num1)+m(num2) << " " << M(num1)+M(num2) << endl;
    }
}