#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int sz,num;
        cin>>sz>>num;
        vector<int> v;
        for(int i=0;i<sz;i++){
            int a;cin>>a;
            v.push_back(a);
        }
        if(find(v.begin(),v.end(),num)!=v.end()) cout << 1 << endl;
        else cout << -1 << endl;
    }
}