#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len, k;
        cin >> len >> k;
        int list[len];
        for(int i=0;i<len;i++) cin >> list[i];
        int point;
        int s = len/2;
        if(s>=k){
            point = k;
        }else{
            point = len-k;
        }
        sort(list,list + len);
        int mxval=0,mnval=0;
        for(int i=0;i<len;i++){
            if(i<point) mnval += list[i];
            else mxval += list[i];
        }
        cout << mxval - mnval << endl;
    }
}