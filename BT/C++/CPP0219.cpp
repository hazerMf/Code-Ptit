#include <bits/stdc++.h> 
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b;
        cin >> a >> b;
        int mtkq[a][b]={0};
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                int temp;
                cin >> temp;
                if(temp==1){
                    for(int k=0;k<a;k++){
                        mtkq[k][j]=1;
                    }
                    for(int q=0;q<b;q++){
                        mtkq[i][q]=1;
                    }
                }
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout << mtkq[i][j] << " ";
            }
            cout << endl;
        }
    }
}