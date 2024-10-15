#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int min,max,a,b;
        cin >> min >> max >> a >> b;
        int count =0;
        for(int i=min;i<=max;i++){
            if((i%a==0)&&(i%b==0)) count++;
        }
        cout << count << endl;
    }
}