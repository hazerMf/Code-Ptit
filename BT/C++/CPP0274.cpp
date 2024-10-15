#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len;
        cin >> len;
        int book[100001]={0};
        for(int i=0;i<len;i++){
            int a;
            cin >> a;
            book[a]++;
        }
        int count = 0;
        for(int i=0;i<100001;i++){
            if(book[i]>1) count+= book[i];
        }
        cout << count << endl;
    }
}