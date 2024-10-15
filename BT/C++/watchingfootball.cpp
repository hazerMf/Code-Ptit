#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
    int num;
    cin >> num;
    int list[num+1];
    list[0]=0;
    for(int i=1;i<=num;i++){
        cin >> list[i];
    }
    for(int i=0;i<=num;i++){
        if(i==num){
            if(list[i]+15>=90){
                cout << 90;
                break;
            }else{
                cout << list[i]+15;
                break;
            }
        }
        if(list[i+1]-list[i]>15){
            cout << list[i]+15;
            break;
        }
    }
}