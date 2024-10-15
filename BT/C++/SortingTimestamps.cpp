#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
    {
        if (a.second.first != b.second.first)
            return a.second.first < b.second.first;
        else
            return a.second.second < b.second.second;
    }
}
int main()
{
    int n;
    cin >> n;
    pair<int, pair<int, int>> a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].first << " " << a[i].second.first << " " << a[i].second.second << endl;
    }
}