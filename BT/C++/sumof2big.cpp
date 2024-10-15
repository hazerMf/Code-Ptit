#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        char x[1000],y[1000];
        cin >> x >> y;
        cout << x << y;
        int sum[1001];
        int lenx = strlen(x);
        int leny = strlen(y);
        if(x>y){
            int dem = leny;
            for(int i = lenx;i>=0;i--){
                int sox = x[i] - '0';
                int soy = y[i] - '0';
                sum[i] += sox+soy;
                if(sum[i]>9){
                    sum[i];
                }
            }
        }
    }
}