#include <bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cin >> row;
    int count = 0;
    for(int i=1;i<=row;i++){
        int c1 = 0;
        int c0 = 0;
        for(int j=0;j<3;j++){
            int temp;
            cin >> temp;
            if(temp==1)c1++;
            else c0++;
        }
        if(c1>c0)count++;
    }
    cout << count;
}