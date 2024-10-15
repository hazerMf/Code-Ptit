#include <bits/stdc++.h>
using namespace std;

int main(){
    int sz;cin>>sz;
    long long m[201][201]={0};
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(i==0&&j==0) cin>>m[i][j];
            else{
                int temp;
                cin>>temp;
                if(i==0){
                    m[i][j]=temp+m[i][j-1];
                }else if(j==0){
                    m[i][j]=temp+m[i-1][j];
                }else{
                    m[i][j]=max(temp+m[i][j-1],temp+m[i-1][j]);
                }
            }
        }
    }
    cout << m[sz-1][sz-1];
}