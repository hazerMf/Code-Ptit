#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> c >> d >> a >> b;
        a += c;
        b += d;
        cout << a * c - b * d << " + " << a * d + b * c << "i"
             << ", ";
        cout << a * a - b * b << " + " << a * b * 2 << "i" << endl;
    }
}