#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int len;
    cin >> len;
    int list[len];
    int check[10000]={0};
    for(int i =0;i<len;i++){
        cin >> list[i];
    }
    for(int i =0;i<len;i++){
        if(check[list[i]]==0){
            check[list[i]]++;
            cout << "1 ";
        }else{
            cout << "0 ";
        }
    }
}