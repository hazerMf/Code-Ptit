#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        for(int i=2;i<=sqrt(a);i++){
            int count =0;
            if(a%i==0){
                while(a%i==0){
                    a/=i;
                    count++;
                }
                cout << i << " " << count << " ";
            }
        }
        if(a!=1) cout << a << " " << 1;
        cout << endl;
    }
}

