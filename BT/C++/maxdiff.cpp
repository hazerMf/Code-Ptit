#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        int list[len];
        for(int i=0;i<len;i++){
            cin >> list[i];
        }
        int maxx =-1;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                maxx = max(maxx,list[j]-list[i]);
            }
        }
        cout << maxx << endl;
    }
}