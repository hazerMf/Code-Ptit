#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a>>b;
        int check = -1;
        for(int i=0;i<a;i++){
            int temp;
            cin >> temp;
            if(temp == b) check = 1;
        }
        cout << check << endl;
    }
}