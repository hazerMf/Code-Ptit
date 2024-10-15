#include<bits/stdc++.h>
using namespace std;
char Max(int F[26]){
    int max=0;char ch;
    for(int i=0;i<26;i++){
        if(F[i]>max){
            max=F[i];
            ch = 'a'+i;
        }
    }
    return ch;
}

string sol(string S){
    int n=S.size();
    if(n==0) return "0";
    int F[26]={0};
    for(int i=0;i<n;i++){
        F[S[i]-'a']++;
    }
    char ch_max = Max(F);
    int maxCount = F[ch_max-'a'];
    if(maxCount>(n+1)/2) return "0";
    string res[n];
    int ind=0;
    while(maxCount){
        res[ind]=ch_max;
        ind+=2;
        maxCount--;
    }
    F[ch_max-'a']=0;
    for(int i=0;i<26;i++){
        while(F[i]>0){
            if(ind>=n)
            ind = 1;
            res[ind]='a'+i;
            ind+=2;
            F[i]--;
        }
    }
    return "1";
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string S;
        cin >> S;
        cout << sol(S) << endl;
    }
}