#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
    ll list[5];
    for(int i=0;i<4;i++){
        cin >> list[i];
    }
    sort(list,list+4);
    ll x1 = list[1]-list[0];
    ll x2 = list[2]-list[1];
    ll x3 = list[3]-list[2];
    cout << __gcd(x1,__gcd(x3,x2));
}