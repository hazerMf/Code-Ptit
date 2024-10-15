#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a >> b;
        multiset<int> list;
        for(int i=0;i<a+b;i++){
            int temp;cin>>temp;
            list.insert(temp);
        }
        for(auto i:list) cout << i << " ";
        cout << endl;
    }
}