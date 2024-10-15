#include <bits/stdc++.h>
using namespace std;

void testCase(){
    int n; 
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while(n--) {
        int x; 
        cin >> x;
        pq.push(x);
    }
    long long ans = 0;
    while(pq.size()>=2) {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    cout << ans;
}

int main() {
    int runs; 
    cin >> runs;
    while(runs--){
        testCase();
        cout << endl;
    }
}