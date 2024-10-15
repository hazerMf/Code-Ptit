#include<bits/stdc++.h>

using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long x,y,z;
        long long ans = x;
        cin >> x >> y >> z;
        for(long long i=0;i<=y;i++){
            ans = ans * x;
            if(ans%z){
                ans /= z;
            }
        }
        cout << ans << endl;
    }
}