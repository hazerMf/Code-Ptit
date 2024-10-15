#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    long long ti;
    cin >> ti;
    long long tc;
    long long tn;
    string tmp = s.substr(0, 2);
    string tmp2 = s.substr(2, 2);
    tn = stoi(tmp2);
    if (tmp == "HP")
        tc = 900000;
    else if (tmp == "HT")
        tc = 2000000;
    else
        tc = 500000;
    cout << s << " " << t << " " << tn << " " << tc << " " << ti * tn + tc << endl;
}