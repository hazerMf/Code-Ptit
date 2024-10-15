#include <bits/stdc++.h>
using namespace std;
double polygonArea(double X[], double Y[], int n)
{
    double area = 0.0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;
    }
    return abs(area) / 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double x[n], y[n];
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            double a, b;
            cin >> a >> b;
            x[i] = a;
            y[i] = b;
        }
        cout << fixed << setprecision(3) << polygonArea(x, y, n) << endl;
    }
}