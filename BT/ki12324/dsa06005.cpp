#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len1,len2;
        cin >> len1 >> len2;
        vector<int> v;
        for(int i=0;i<len1+len2;i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        vector<int> giao;
        cout << v[0] << " ";
        for(int i=1;i<len1+len2;i++){
            if(v[i]==v[i-1]){
                giao.push_back(v[i]);
            }else cout << v[i] << " ";
        }
        cout << endl;
        for(auto i:giao){
            cout << i << " ";
        }
        cout << endl;
    }
}