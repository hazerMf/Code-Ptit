#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        int cnt=0;
        for(int i=0;i<len;i++){
            int a;
            cin >> a;
            if(a==0) cnt++;
        }
        cout << cnt << endl;
    }
}