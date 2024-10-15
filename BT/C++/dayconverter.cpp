#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,e;
    e = 0;
    cin >> a;
    b = a / 365;
    c = a % 365;
    d = c / 7;
    e = c % 7;
    cout << b << " " << d << " " << e;
}