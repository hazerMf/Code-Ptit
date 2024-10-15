#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int size;
        cin >> size;
        int mt[size][size];
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cin >> mt[i][j];
            }
        }
        int mtcheck[1000000];
        int max = mt[0][0];
        for(int i=0;i<size;i++){
            for(int j=0;i<size;j++){
                if(mtcheck[mt[i][j]]==i){
                    mtcheck[mt[i][j]]++;
                }
                if(mt[i][j]>max) max = mt[i][j];
            }
        }
        int count = 0;
        for(int i=0;i<max;i++){
            if(mtcheck[i]==size-1){
                count++;
            }
        }
        cout << count << endl;
    }
}