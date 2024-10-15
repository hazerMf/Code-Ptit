#include <iostream>
#include <cmath>
using namespace std;

int nt(int a){
    if(a==1) return 0;
    else{
        for(int i =2;i<=sqrt(a);i++){
            if(a%i==0) return 0;
        }
        return 1;
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        int check = 0;
        for(int i=2;i<=a/2+2;i++){
            if(nt(i)){
                if(nt(a-i)){
                    cout << i << " " << a-i << endl ;
                    check = 1;
                    break;
                }
            }
        }
        if(check ==0){
            cout << "-1" << endl;
        }
    }
}