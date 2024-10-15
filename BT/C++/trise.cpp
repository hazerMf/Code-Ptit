#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long int len;
        cin >> len;
        long long int list[len];
        for(long long int i=0;i<len;i++){
            cin >> list[i];
        }
        long long max = list[0];
        for(long long int i=1;i<len;i++){
            if(list[i]>max){
                max = list[i];
            }  
        }
        cout << max << endl;
    }
}