#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a >> b;
        while(a%2==0){
            a/=2;
        }
        while(a%3==0){
            a/=3;
        }
        while(b%2==0){
            b/=2;
        }
        while(b%3==0){
            b/=3;
        }
        if(a==b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}