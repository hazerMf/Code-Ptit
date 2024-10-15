#include <bits/stdc++.h> 
using namespace std;

int nt(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int max;
        cin >> max;
        for(int i=2;i*i<=max;i++){
            if(nt(i)) cout << i*i << " ";
        }
        cout << endl;
    }
}