#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        long long n;cin>>n;
        string s;cin>>s;
        long long cnt[100005]={0};
        for(int i = 0;i < s.length();i++){
            cnt[s[i]]++;
        }
        priority_queue<long long> q;
        for(auto i:cnt){
            if(i) q.push(i);
        }
        while(n--){
            if(q.empty()) break;
            long long temp = q.top();
            temp--;
            q.pop();
            q.push(temp);
        }
        long long sum=0;
        while(!q.empty()){
            long long x = q.top();
            sum+=x*x;
            q.pop();
        }
        cout << sum << endl;
    }
}