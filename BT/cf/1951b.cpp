#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int n,p;cin>>n>>p;
        long long list[n];
        for(int i=0;i<n;i++){
            cin>>list[i];
        }
        long long yc = list[p-1];
        int ans1=0;
        int ans2=0;
        int strgr;
        for(int i=0;i<n;i++){
            if(i==p-1) continue;
            else{
                if(list[i]<yc) ans1++;
                else{
                    strgr=i;
                    break;
                }
            }
        }
        for(int i=strgr;i<n;i++){
            if(i==p-1) continue;
            else{
                if(list[i]<yc) ans2++;
                else break;
            }
        }
        cout << max(ans1,ans2) << endl;
    }
}