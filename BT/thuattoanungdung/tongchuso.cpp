#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        int sum = 0;
        while(a>0){
            sum += a%10;
            a /= 10;
        }
        cout << sum << endl;
    }
}