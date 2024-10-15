#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int sz;cin>>sz;
        int cnt[10]={0};
        for(int i=0;i<sz;i++){
            string a;cin>>a;
            for(int i=0;i<=a.length();i++){
                int b = a[i]-'0';
                cnt[b]++;
            }
        }
        for(int i=0;i<10;i++){
            if(cnt[i]>0) cout << i << " ";
        }
        cout << endl;
    }
}