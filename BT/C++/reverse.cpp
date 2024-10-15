#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long num;
    cin >> num;
    long long a = 0;
    while(num>0){
        long long so = num%10;
        a = a*10 + so;
        num /=10;
    }
    cout << a;
}