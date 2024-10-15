#include<bits/stdc++.h>
using namespace std;
int k;

bool bds(int a,int b){
    return abs(a-k)<abs(b-k);
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int size;
        cin >> size >> k;
        int list[size];
        for(int i=0;i<size;i++){
            cin >> list[i];
        }
        stable_sort(list,list+size,bds);
        for(int i=0;i<size;i++){
            cout << list[i] << " ";
        }
        cout << endl;
    }
}