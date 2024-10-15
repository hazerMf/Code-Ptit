#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        int list[len];
        for(int i=0;i<len;i++) cin >> list[i];
        sort(list,list+len);
        int l=0,r=len-1;
        for(int i=0;l!=r;i++){
            if(i%2==0){
                cout << list[r] << " ";
                r--;
            }else{
                cout << list[l] << " ";
                l++;
            }
        }
        cout << list[l] << endl;
    }
}