#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;cin>>n;
    vector<int> a(n),l(n),r(n);
    for(int &i:a) cin >> i;
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(st.empty()) l[i]=0;
        else l[i] = st.top()+1;
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(st.empty()) r[i]=n-1;
        else r[i] = st.top()-1;
        st.push(i);
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(r[i]-l[i]+1>=a[i]){
            res=max(res,a[i]);
        }
    }
    cout << res;
}

int main(){
    int runs;;cin >> runs;
    while(runs--){
        sol();
        cout << endl;   
    }
}