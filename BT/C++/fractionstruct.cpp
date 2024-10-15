#include<bits/stdc++.h>

using namespace std;

struct Fraction{
    long long x,y;
};

void input(Fraction &p){
    cin >> p.x >>p.y;
}

void simplify(Fraction &p){
    long long common;
    common = __gcd(p.x,p.y);
    p.x /= common;
    p.y /= common;
}

void print(Fraction p){
    cout << p.x << "/" << p.y << endl;
}

int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}