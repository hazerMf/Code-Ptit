#include <bits/stdc++.h>
using namespace std;
int main()
{
    int runs;
    cin >> runs;
    while (runs--){
        int n, k;
        cin >> n >> k;
        int list[k + 1];
        for (int i = 1; i <= k; i++)
            cin >> list[i];
        list[0] = -1;
        for (int i = k; i >= 0; i--)
        {
            if (list[i] != n - k + i)
            {
                list[i]++;
                for (int j = i + 1; j <= k; j++)
                    list[j] = list[j - 1] + 1;
                break;
            }
        }
        for (int i = 1; i <= k; i++)
            cout << list[i] << " ";
        cout << endl;
    }
}