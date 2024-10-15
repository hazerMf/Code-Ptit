#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long ucln(long long i){
    
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        int num=1;
        for(int i=2;i<=a;i++){
            for(int j=2;j<i;j++){
                if(i%j==0) i/=j;
            }
            num *= i;
        }
        cout << num << endl;
    }
}