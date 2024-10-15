#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin >> a;
    double sum=0;
    for(int i=1;i<=a;i++){
        sum += (float)1/i;
    }
    cout << fixed << setprecision(4) << sum ;
}