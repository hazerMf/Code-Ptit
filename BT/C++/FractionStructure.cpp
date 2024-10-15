#include <bits/stdc++.h>
using namespace std;
struct Fraction
{
    long long tu, mau;
};
void input(Fraction &p)
{
    cin >> p.tu >> p.mau;
}
void simplify(Fraction &p)
{
    long long k = __gcd(p.tu, p.mau);
    p.tu /= k;
    p.mau /= k;
}
void print(Fraction p)
{
    cout << p.tu << "/" << p.mau << endl;
}
int main()
{
    struct Fraction p;
    input(p);
    simplify(p);
    print(p);
    return 0;
}