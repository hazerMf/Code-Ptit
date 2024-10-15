#include <bits/stdc++.h>
using namespace std;
struct tk
{
    string msv;
    string name;
    string room;
    double d1, d2, d3;
    void in()
    {
        cout << msv << " " << name << " " << room << " " << fixed << setprecision(1) << d1 << " " << fixed << setprecision(1) << d2 << " " << fixed << setprecision(1) << d3 << endl;
    }
};
bool cmp(tk a, tk b)
{
    return a.name < b.name;
}
int main()
{
    int n;
    cin >> n;
    tk a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].room);
        cin >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        a[i].in();
    }
}