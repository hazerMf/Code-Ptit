#include <bits/stdc++.h> 
using namespace std;

int nt(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

void check(int sum){
    for(int i=2;i<=sum/2;i++){
        if(nt(i)&&nt(sum-i)){
            cout << i << " " << sum-i << endl;
            break;
        }
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int sum;
        cin >> sum;
        check(sum);
    }
}