#include<bits/stdc++.h>

using namespace std;

struct Employee{
    char ten[51];
    char gt[8];
    char ngaysinh[11];
    char diachi[100];
    char masothue[11];
    char contract[11];
};

void input(Employee &A){
    cin.getline(A.ten,51);
    cin.getline(A.gt,8);
    cin.getline(A.ngaysinh,11);
    cin.getline(A.diachi,100);
    cin.getline(A.masothue,11);
    cin.getline(A.contract,11);
}

void print(Employee A){
    cout << "00001 " << A.ten << " " << A.gt << " " << A.ngaysinh << " " << A.diachi << " " << A.masothue << " " << A.contract << endl;
}

int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}