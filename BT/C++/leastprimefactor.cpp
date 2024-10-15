#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int check(int a){
    if(a==1){
        return 1;
    }else if(a%2==0){
        return 2;
    }else{
        for(int i=3;i<=sqrt(a);i++){
            if(a%i==0) return i;
        }
    }
    return a;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int num;
        cin >> num;
        
        for(int i=1;i<=num;i++){
            cout << check(i)<< " ";
        }
    }
}