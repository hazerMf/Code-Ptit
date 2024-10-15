#include<bits/stdc++.h>
using namespace std;
int n,a[100],b[100],used[100],cnt;

bool cmp(int a[],int b[],int n){
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

void tryy(int i){
    for(int j=1;j<=n;j++){
        if(used[j]==0){
            b[i]=j;
            used[j]=1;
            if(i==n){
                if(cmp(a,b,n)){
                    cnt++;
                    cout << cnt << endl;
                }else cnt++;
            }
            else tryy(i+1);
            used[j]=0;
        }
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        cin >> n;
        b[0]=0;
        cnt = 0;
        for(int i=1;i<=n;i++) cin >> a[i];
        tryy(1);
    }
}