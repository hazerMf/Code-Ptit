#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
    string list;
    cin >> list;

    int count = 1;
    char last = list[0]; 

    for (int i = 1; i < list.size(); i++) {
        if (list[i] == last) {
            count++; 
        }else {
            count = 1;
            last = list[i];
        }
        if (count == 7){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}