#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        int list[len];
        for(int i=0;i<len;i++){
            cin >> list[i];
        }
        int min = INT_MAX;
        for(int i=0;i<len-1;i++){
            for(int j=i+1;j<len;j++){
                int temp = list[i]+list[j];
                if(abs(temp)< abs(min)) min = temp;
            }
        }
        cout << min << endl;
    }
}