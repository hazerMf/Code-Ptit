#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int num;
        int a[10001]={0},b[10001]={0};
        cin >> num;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                a[i]++;
                while(num%i==0){
                    num/=i;
                    b[a[i]]++;
                }
            }
        }
        for(int i=0;i<10000;i++){
            if(a[i]!=0){
                cout << i << " " << b[a[i]] << " ";
            }
        }
    }
}
