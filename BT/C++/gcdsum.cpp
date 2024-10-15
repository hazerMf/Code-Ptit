#include <iostream>
#include <cmath>

using namespace std;

int gcd(long long int a){
    long long int b = a;
    long long int sum = 0;
    while(b>0){
        sum += b%10;
        b /= 10;
    }
    b = a;
    while(sum != b){
        if(sum>b){
            sum -= b;
        }else{
            b -= sum;
        }
    }
    if(sum==1){
        return 0;
    }else return a;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long int a;
        cin >> a;
        while(gcd(a)==0){
            a++;
        }
        cout << a << endl;
    }
}