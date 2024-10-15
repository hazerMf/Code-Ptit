#include<bits/stdc++.h>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        char a;
        cin >> a;
        if(isupper(a)){
            cout << (char)tolower(a) << endl;
        }else{
            cout << (char)toupper(a) << endl;
        }
    }
}