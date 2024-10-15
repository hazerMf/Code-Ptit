#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        char stringS[1000000];
        int k;
        cin >> stringS >> k;
        int check[26] = {0}; 
        for(int i=0; i<strlen(stringS); i++){
            check[tolower(stringS[i]) - 'a'] = 1;
        }
        int unique_chars = 0;
        for(int i=0; i<26; i++){
            if(check[i]){
                unique_chars++;
            }
        }
        if(unique_chars + k >= 26){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
}  