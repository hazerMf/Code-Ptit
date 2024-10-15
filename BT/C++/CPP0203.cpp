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
            int temp;
            cin >> temp;
            if(temp>=0){
                book[temp]++;
            }
        }
        for(int i=1;i<100001;i++){
            if(book[i]==0){
                cout << i << endl;
                break;
            }
        }
    }
}