#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long len,sub;
        cin >> len >> sub;
        long long list[len];
        for(long long i=0;i<len;i++){
            cin>>list[i];
        }
        long long max = *max_element(list,list+sub);
        cout << max << " ";
        for(long long i = sub;i<len;i++){
            if(list[i]>max){
                max=list[i];
            }else if(list[i-sub]==max){
                max = *max_element(list+i-sub+1,list+i+1);
            }
            cout << max << " ";
        }
        cout << endl;
    }
}

