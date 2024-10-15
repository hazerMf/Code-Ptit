#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        cout << 1 << " ";
        for(int i=2;i<=a;i++){
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    cout << j << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
}
