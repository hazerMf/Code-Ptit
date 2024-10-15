#include <bits/stdc++.h>
using namespace std;

unsigned long long cata[102];

void prepare(){
    cata[0]=1;
    cata[1]=1;
    for(int i=2;i<101;i++){
        unsigned long long sum=0;
        for(int j=0;j<i;j++){
            sum += cata[j]*cata[i-j-1];
        }
        cata[i] = sum;
    }
}


int main(){
    int runs;cin>>runs;
    prepare();
    while(runs--){
        int n;cin>>n;
        cout << cata[n] << endl;
    }
}