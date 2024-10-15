#include <bits/stdc++.h> 
using namespace std;

int check(int n,int pos){
    int count=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                count++;
                if(count==pos) return i;
            }
        }
    }
    if(n>1 && count == pos-1) return n;
    return -1 ;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int n,pos;
        cin >> n >> pos;
        cout << check(n,pos) << endl;
    }
}