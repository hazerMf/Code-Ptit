#include <bits/stdc++.h>
using namespace std;
struct SV
{
    int index;
    string msv;
    string name;
    string room;
    string email;
    string co;
    void in()
    {
        cout << index << " " << msv << " " << name << " " << room << " " << email << " " << co << endl;
    }
};
bool cmp(SV a, SV b)
{
    return a.msv < b.msv;
}
int main()
{
    int t;
    cin >> t;
    SV a[t + 1];
    cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        a[i].index = i;
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].room);
        getline(cin, a[i].email);
        getline(cin, a[i].co);
    }
    sort(a + 1, a + t + 1, cmp);
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        for (int i = 1; i <= t; i++)
        {
            if (a[i].co == s)
                a[i].in();
        }
    }
}