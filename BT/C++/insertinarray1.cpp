#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int list1[a],list2[b];
    for(int i=0;i<a;i++){
        cin >> list1[i];
    }
    for(int i=0;i<b;i++){
        cin >> list2[i];
    }
    int po;
    cin >> po;
    for(int i=0;i<po;i++){
        cout << list1[i] << " ";
    }
    for(int i=0;i<b;i++){
        cout << list2[i] << " ";
    }
    for(int i=po;i<a;i++){
        cout << list1[i] << " ";
    }

}