#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int runs;
    cin >> runs;
    int coin[10] = {1000,500,200,100,50,20,10,5,2,1};
    while(runs--){
        int a;
        cin >> a;
        int check = 0;
        int num = 0;
        while(a>0){
            if(a<coin[check]) check ++;
            else{
                a = a - coin[check];
                num ++;
            }
        }
        cout << num << endl;
    }
}
