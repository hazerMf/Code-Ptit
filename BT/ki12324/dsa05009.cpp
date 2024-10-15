#include <bits/stdc++.h>
using namespace std;

int n,sum;
int l[101];
bool stop;

void chk(int i,int s){
    if(i==n||s==sum/2||stop){
        if(s==sum/2) stop=true;
        return;
    }
    if(s+l[i+1]<=sum/2){
        chk(i+1,s+l[i+1]);
    }
    chk(i+1,s);
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        sum=0;
        cin>>n;
        stop=false;
        for(int i=0;i<n;i++){
            cin>>l[i];
            sum+=l[i];
        }
        if(sum%2==0){
            chk(0,0);
        }
        cout << (stop ? "YES" : "NO") << endl;
    }
}