#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int sz;
        cin >> sz;
        int list[sz];
        for(int i=0;i<sz;i++){
            cin >> list[i];
        }
        sort(list,list+sz);
        long long a=0,b=0;
        for(int i=0;i<sz;i++){
            if(i%2==0){
                a = a*10 + list[i];
            }else{
                b = b*10 + list[i];
            }
        }
        cout << a+b << endl;
    }
}