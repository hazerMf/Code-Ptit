#include <iostream>
#include <cmath>

using namespace std;

int addDigits(long long int num) {
        int result = 0;
        do {
            result = 0;
            while (num > 0) {
                result += num % 10;
                num /= 10;
            }
            num = result;
        } while (result >= 10);
        return result;
    }


int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long int a;
        cin >> a;
        cout << addDigits(a) << endl;
    }
}