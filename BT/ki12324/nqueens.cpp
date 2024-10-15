#include<iostream>
#include<vector>
using namespace std;

int n, x[1000];
vector<vector<int>> sav;
int ngang[1000], xuoi[1000], nguoc[1000];

void sinh(int i){
    for(int j=1; j<=n; j++){
        if(!ngang[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
            x[i] = j;
            ngang[j]=1;
            xuoi[i-j+n] = 1;
            nguoc[i+j-1] = 1;
            if(i==n){
                vector<int> temp(x+1,x+n+1);
                sav.push_back(temp);
            }
            else sinh(i+1);
            ngang[j] = 0;
            xuoi[i-j+n] = 0;
            nguoc[i+j-1] = 0;
        }
    }
}

int main(){
    cin >> n;
    sinh(1);
    for(auto i:sav){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
}