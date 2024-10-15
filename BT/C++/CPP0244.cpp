#include <bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin >> len;
    int list[len];
    for(int i=0;i<len;i++){
        cin >> list[i];
    }
    sort(list,list+len);
    for(int i=0;i<len;i++){
        for(int j=i+1;i<len;j++){
            if(list[i]==list[j]) list[j]=0;
            else break;
        }
    }
    for(int i=0;i<len;i++){
        if(list[i]!=0) cout << list[i] << " ";
    }
    cout << endl;
}