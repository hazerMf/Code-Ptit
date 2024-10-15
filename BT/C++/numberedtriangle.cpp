#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int h;
    cin >> h;
    int start = 1;
    for(int i=0;i<h;i++){
        for(int j=1;j<=start;j++){
            cout << j;
        }
        start += 2;
        cout << endl;
    }
}