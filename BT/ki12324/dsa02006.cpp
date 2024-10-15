#include<bits/stdc++.h>
using namespace std;
int n,sum;
int a[20],x[20];
vector<vector<int>> vv;

void out(){
    vector<int> v;
    int temp =0;
    for(int i=1;i<=n;i++){
        if(x[i]==1){
            v.push_back(a[i]);
            temp += a[i];
        }
    }
    sort(v.begin(),v.end());
    if(temp==sum){
        vv.push_back(v);
    }
}

void sinh(int k){
    for(int i=0;i<=1;i++){
        x[k] = i;
        if(k==n) out();
        else sinh(k+1);
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        cin >> n >> sum;
        for(int i =1;i<=n;i++) cin >> a[i];
        sinh(1);
        int p = vv.size();
        if(p==0) cout << "-1";
        else{
            sort(vv.begin(),vv.end());
            for(int i=0;i<p;i++){
                cout << "[";
                for(int j=0;j<vv[i].size();j++){
                    if(j==vv[i].size()-1) cout << vv[i][j] << "]";
                    else cout << vv[i][j] << " ";
                }
                cout << " ";
            }
        }
        vv.clear();
        cout << endl;
    }
}