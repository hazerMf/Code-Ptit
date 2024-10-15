#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        char num[18];
        cin >> num;
        int len = strlen(num);
        int check = 1;
        for(int i=0;i<len;i++){
            int a = num[i] - '0';
            if(a%2==1){
                check =0;
                break;
            }
        }
        if(check==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}