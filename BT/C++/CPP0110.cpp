#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int runs;
    cin >> runs ;
    while(runs--){
        char code[18];
        cin >> code;
        int len = strlen(code);
        for(int i=0;i<len;i++){
            if(code[i]=='0'&&code[i+1]=='8'&&code[i+2]=='4') i+= 2;
            else cout << code[i] ;
        }
        cout << endl ;
    }
}