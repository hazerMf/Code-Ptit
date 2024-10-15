#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a >> b;
        int sum = 0;
        for(int i =1;i<=a;i++){
            sum += i%b;
        }
        if(sum==b) cout << 1 << endl;
        else cout << 0 << endl;
    }
}