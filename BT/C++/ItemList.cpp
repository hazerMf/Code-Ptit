#include <bits/stdc++.h>
using namespace std;
struct tk
{
    int id;
    string name;
    string group;
    double profit;
    void in()
    {
        cout << id << " " << name << " " << group << " " << fixed << setprecision(2) << profit << endl;
    }
};

bool cmp(tk a, tk b)
{
    return a.profit > b.profit;
}

int main()
{
    int n;
    cin >> n;
    tk a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        a[i].id = i;
        cin.ignore();
        getline(cin, a[i].name);
        getline(cin, a[i].group);
        double x, y;
        cin >> x >> y;
        a[i].profit = y - x;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
        a[i].in();
}