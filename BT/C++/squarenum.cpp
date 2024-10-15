#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum = 0;
    for(int i=a;i<=b;i++){
        int sqr = sqrt(i);
        if(sqr*sqr==i){
            sum += i;
        }
    }
    cout << sum;
}