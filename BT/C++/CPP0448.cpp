#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a>>b;
        int book[100001]={0};
        for(int i=0;i<a;i++){
            int k;
            cin >> k; 
            book[k]++;
        }
        if(book[b]==0) cout << -1;
        else cout << book[b];
        cout << endl;
    }
}