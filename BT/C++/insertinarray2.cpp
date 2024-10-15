#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    for(int j=0;j<runs;j++){
        int a,b,po;
        cin >> a >> b >> po;
        int list1[a],list2[b];
        for(int i=0;i<a;i++){
            cin >> list1[i];
        }
        for(int i=0;i<b;i++){
            cin >> list2[i];
        }
        cout << "Test " << j+1 << ":" << endl;
        for(int i=0;i<po;i++){
            cout << list1[i] << " ";
        }
        for(int i=0;i<b;i++){
            cout << list2[i] << " ";
        }
        for(int i=po;i<a;i++){
            cout << list1[i] << " ";
        }
        cout << endl;
    }
}