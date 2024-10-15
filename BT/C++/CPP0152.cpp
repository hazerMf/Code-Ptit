#include <bits/stdc++.h>
using namespace std;

int check(int a,int m){
    for(int i=1;i<m;i++){
        if((i*a)%m==1) return i;
    }
    return -1;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,m;
        cin >> a >> m;
        cout << check(a,m) << endl;
    }
}