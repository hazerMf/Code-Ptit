#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    char ten[51];
    char ngaysinh[11];
    char lop[12];
    float gpa;
    void fix(char a[]){
        if(a[1]=='/') a = (char)'0' + a;
        if(a[4]=='/') a.insert(4, "0");
    }
};

void nhap(SinhVien &A){
    cin.getline(A.ten,51);
    char ngaysinh[11];
    cin.getline(A.lop,12);
    cin.getline(ngaysinh,11);
    A.fix(ngaysinh);
    A.ngaysinh = ngaysinh;
    cin >> A.gpa;
}


void in(SinhVien A){
    cout << "B20DCCN001 " << A.ten << " " << A.lop << " " << A.ngaysinh << " " << fixed << setprecision(2) << A.gpa << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}