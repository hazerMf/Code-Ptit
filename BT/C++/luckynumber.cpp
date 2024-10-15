#include <bits/stdc++.h>
using namespace std;

int lucky(int a){
    int sum=0;
    while(a>0){
        sum += a%10;
        a/=10;
    }
    int b=sum;
    if(b==9) return 1;
    else if(b<9)return 0;
    else return lucky(b);
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string a;
        cin >> a;
        int c=0;
        for(int i=0;i<a.size();i++){
            c+= a[i] - '0';
        }
        cout << lucky(c) << endl;
    }
}