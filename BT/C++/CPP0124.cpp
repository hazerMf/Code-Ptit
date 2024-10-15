#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i=2;i<=sqrt(a);i++){
        int count =0;
        if(a%i==0){
            while(a%i==0){
                a/=i;
                count++;
            }
            cout << i << " " << count << " " << endl;
        }
    }
    if(a!=1) cout << a << " " << 1;
}