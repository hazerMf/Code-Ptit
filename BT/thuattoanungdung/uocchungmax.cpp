#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a >> b;
        while(a!=b){
            if(a>b)a-=b;
            else b-=a;
        }
        cout << a << endl;
    }
}