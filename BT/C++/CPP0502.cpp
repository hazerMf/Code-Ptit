#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
    char ten[41];
    char ngaysinh[11];
    float sub1;
    float sub2;
    float sub3;
};

void nhap(ThiSinh &x){
    cin.getline(x.ten,41);
    cin.getline(x.ngaysinh,11);
    cin >> x.sub1 >> x.sub2 >> x.sub3;
    
}

void in(ThiSinh x){
    cout << x.ten << " " << x.ngaysinh << " " << fixed << setprecision(1) << x.sub1+x.sub2+x.sub3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}