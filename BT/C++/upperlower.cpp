#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    while(a--){
        char b;
        cin >> b;
        if(isupper(b)) cout << (char)tolower(b) << "\n";
        else cout << (char)toupper(b) << "\n";
    }
}