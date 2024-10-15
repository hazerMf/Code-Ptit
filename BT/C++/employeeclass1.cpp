#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

struct nv{
    char ten[41];
    char ngaysinh[11];
    char address[101];
    char tax[11];
    char ngaychet[11];
    char gt[4];
};

int main(){
    nv x;
    cin.getline(x.ten,41);
    cin.getline(x.gt,4);
    cin.getline(x.ngaysinh,11);
    cin.getline(x.address,101);
    cin.getline(x.tax,11);
    cin.getline(x.ngaychet,11);
    cout << "00001 " << x.ten << " " << x.gt << " " << x.ngaysinh << " " << x.address << " " << x.tax << " " << x.ngaychet;
}