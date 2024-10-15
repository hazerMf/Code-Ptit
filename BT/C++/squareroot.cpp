#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        float a;
        cin >> a;
        double sum = 0;
        for(int i=1;i<=a;i++){
            sum = (sqrt(sum+i));
        }
        cout<<fixed<<setprecision(5)<<sum<<endl;
    }
}