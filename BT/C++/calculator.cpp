#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    float a,b;
    char dau;
    cin >>a>>dau>>b;
    if(dau=='+') cout << fixed << setprecision(2) << (float)(a+b);
    else if(dau=='-') cout << fixed << setprecision(2) << (float)(a-b);
    else if(dau=='*') cout << fixed << setprecision(2) << (float)(a*b);
    else cout << fixed << setprecision(2) << (float)(a/b);
}