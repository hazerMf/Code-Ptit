#include <bits/stdc++.h>
using namespace std;

struct hs{
    char ten[41];
    char ngaysinh[11];
    float sub1;
    float sub2;
    float sub3;
};

int main(){
    hs x;
    cin.getline(x.ten,41);
    cin.getline(x.ngaysinh,11);
    cin >> x.sub1 >> x.sub2 >> x.sub3;
    cout << x.ten << " " << x.ngaysinh << " " << fixed << setprecision(1) << x.sub1+x.sub2+x.sub3;
}