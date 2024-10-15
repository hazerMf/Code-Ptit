#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main(){
    int m,n,i;
    cin >> m >> n >> i;
    int mt[m][n];
    i = i-1;
    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            cin >> mt[a][b];
        }
    }
    for(int a=0;a<m;a++){
        for(int b=a+1;b<m;b++){
            if(mt[a][i]>mt[b][i]){
                int temp = mt[a][i];
                mt[a][i] = mt[b][i];
                mt[b][i] = temp;
            }
        }
    }
    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            cout << mt[a][b]<<" ";
        }
        cout << endl;
    }
}
