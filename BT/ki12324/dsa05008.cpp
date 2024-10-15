#include<bits/stdc++.h>

using namespace std;

void testcase() {
    int n, S;cin>>n>>S;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int dp[S + 1]={0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = S; j >= a[i]; j--) {
            if (dp[j - a[i]]==1) dp[j] = 1;
        }

    }
    if(dp[S]==1) cout << "YES" <<endl;
    else cout << "NO" <<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testcase();
    }
}