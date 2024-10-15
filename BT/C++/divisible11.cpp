#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string num;
        cin >> num;
        int len=num.size();
        int sum=0;
        for(int i=0;i<len;i+=2){
            sum += num[i]-'0';
        }
        for(int i=1;i<len;i+=2){
            sum -= num[i]-'0';
        }
        if(abs(sum)%11) cout << 0 << endl;
        else cout << 1 << endl;
    }
}