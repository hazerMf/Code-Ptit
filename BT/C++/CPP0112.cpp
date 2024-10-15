#include<bits/stdc++.h>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        double x1,x2,y1,y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << fixed << setprecision(4) << sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2)) << endl;
    }
}