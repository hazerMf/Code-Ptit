#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int list[1001]={0};
    int dem=0;
    for(int i=1;dem<1000;i++){
        if((i%3!=0)&&((i%10)!=3)){
            list[dem] = i;
            dem++;
        }
    }
    int in;
    cin >> in;
    cout << list[in-1];
}