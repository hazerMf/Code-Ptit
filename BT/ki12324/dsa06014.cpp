#include<bits/stdc++.h>
using namespace std;
vector<int> nums;

bool chk(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        int ans = -1;
        for(int i=2;i<=a/2;i++){
            if(chk(i)){
                if(chk(a-i)){
                    ans = i;
                    break;
                }
            }
        }
        if(ans==-1){
            cout << ans << endl;
        }else{
            cout << ans << " " << a-ans << endl;
        }
    }
}