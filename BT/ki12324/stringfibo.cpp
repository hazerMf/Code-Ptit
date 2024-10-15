#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n>>k;
    queue<string> s;
    s.push("A");
    s.push("B");
    int dem = 2;
    while(dem<n){
        string fi = s.front();
        s.pop();
        string se = s.front();
        s.push(fi+se);
        cout << fi + se << endl;
        dem++;
    }
    s.pop();
    string ans = s.front();
    cout << ans[k - 1];
}
