#include <bits/stdc++.h> 
using namespace std;

int main() {
    int runs;
    cin >> runs;
    while(runs--){
        long len;
        cin >> len;
        long long listout[len]={-1};
        long long max;
        for(int i=0;i<len;i++){
            long long temp;
            cin >> temp;
            if(i==0) max = temp;
            else if((temp > max)&&(i!=0)) max = temp;
            listout[temp]=temp;
        }
        for(int i=0;i<=max;i++){
            cout << listout[i] << " ";
        }
        cout << endl;
    }
}