#include <bits/stdc++.h>
using namespace std;

struct Examinee{
    char ten[51];
    char ngaysinh[11];
    float sub1;
    float sub2;
    float sub3;
};

void input(Examinee &A){
    cin.getline(A.ten,51);
    cin.getline(A.ngaysinh,11);
    cin >> A.sub1 >> A.sub2 >> A.sub3;
}

void print(Examinee A){
    cout << A.ten << " " << A.ngaysinh << " " << fixed << setprecision(1) << A.sub1+A.sub2+A.sub3 << endl;

}

int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}