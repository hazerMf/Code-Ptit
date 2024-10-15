#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//window slide

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
        sort(list,list + len);
        int minidif = list[1] - list[0];
        int dif;
        for(int i=1;i<len-1;i++){
            dif = list[i+1] - list[i];
            if(dif<minidif){
                minidif = dif;
            }
        }
        cout << minidif << endl;
    }
}