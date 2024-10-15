#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        long long len;
        cin >> len;
        long long list[len],check[9999];
        for(int i=0;i<len;i++){
            cin >> list[i];
            check[list[i]]++;
        }
        sort(list,list+len);
        int missing =0;
        for(long long i=list[0];i<=list[len-1];i++){
            if(check[i]==0) missing++;
        }
        cout << missing << endl;
    }
}