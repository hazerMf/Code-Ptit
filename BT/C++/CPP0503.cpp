#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
    long long x,y;
};

void nhap(PhanSo &p){
    cin >> p.x >>p.y;
}

void rutgon(PhanSo &p){
    long long common;
    common = __gcd(p.x,p.y);
    p.x /= common;
    p.y /= common;
}

void in(PhanSo p){
    cout << p.x << "/" << p.y << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}