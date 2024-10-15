#include<bits/stdc++.h>

using namespace std;

struct Student{
    char ten[51];
    char ngaysinh[11];
    char lop[12];
    float gpa;
};

void input(Student &A){
    cin.getline(A.ten,51);
    cin.getline(A.lop,12);
    cin.getline(A.ngaysinh,11);
    cin >> A.gpa;
}

void fix(Student a){
    char ngay[12];
    char *temp[12]=strtok(a.ngaysinh, /);
    if(temp < 10){
        temp
    }

}

void print(Student A){
    cout << "B20DCCN001 " << A.ten << " " << A.lop << " " << A.ngaysinh << " " << fixed << setprecision(2) << A.gpa << endl;
}

int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}