#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a>>b;
        int sum = ((1+a)*a)/2;
        int sum1 = (sum+b)/2;
        int sum2 = (sum-b)/2;
        if(sum1+sum2==sum){
            if(__gcd(sum1,sum2)==1){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}