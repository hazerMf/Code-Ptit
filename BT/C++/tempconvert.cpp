#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int tempc;
    cin >> tempc;
    float tempf = (tempc*1.00 *9 /5)+32;
    cout << fixed << setprecision(2) << tempf;
}