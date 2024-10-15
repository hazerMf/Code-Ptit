#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int n;cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i =0;i<n-1;i++){
            if(v[i]==v[i+1]) ans++;
        }
        cout << ans << endl;
    }
}