#include<bits/stdc++.h>
using namespace std;

unsigned long long frac(int a){
    unsigned long long sum = 0;
    for(int i = 1;i<=a;i++){
        unsigned long long tich=1;
        for(int j=1;j<=i;j++){
            tich = tich * j;
        }
        sum += tich;
    }
    return sum;
}

int main(){
    int a;
    cin >> a;
    cout << frac(a);
}