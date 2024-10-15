#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        int list[a];
        for(int i=0;i<a;i++){
            cin >> list[i];
        }
        sort(list,list+a);
        int mis = 0;
        for(int i=1;i<a;i++){
            if(list[i]==list[i-1]) continue;
            mis += list[i]-list[i-1]-1;
        }
        cout << mis << endl;
    }
}