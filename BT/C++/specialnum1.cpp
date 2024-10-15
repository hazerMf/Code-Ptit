#include <iostream>
#include <cmath>

using namespace std;

int nt(long long a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long int a;
        cin >> a;
        long long int b=a;
        long long sum = 0;
        while(a>0){
            sum += (a%10);
            a/=10;
        }
        if(nt(sum)) cout << b << endl;
        else cout << -1 << endl;
    }
}
