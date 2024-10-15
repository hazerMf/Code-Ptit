#include <iostream>
#include <cmath>
using namespace std;

int fibocheck(int a){
    if(a==0||a==1) return 1;
    else{
        int f1 = 0;
        int f2 = 1;
        int f3 = f1+f2;
        while(f3<=a){
            f1 = f2;
            f2 = f3;
            f3 = f1+f2;
            if(a==f3) return 1;
        }
        return 0;
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        for(int i =0;i<len;i++){
            int input;
            cin >> input;
            if(fibocheck(input)){
                cout << input << " ";
            }
            
        }
        cout << endl;
    }
}