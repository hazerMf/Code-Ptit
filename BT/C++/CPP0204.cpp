#include <bits/stdc++.h> 
using namespace std;

int nt(int a){
    if(a==1) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int min,max;
        cin >>min>> max;
        int count=0;
        for(int i=min;i<=max;i++){
            if(nt(i)) count++;
        }
        cout <<count<< endl;
    }
}