#include <bits/stdc++.h> 
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a;
        cin >> a;
        int mt[a][a];
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                cin >> mt[i][j];
            }
        }
        int row=0;
        int check=0;
        while(row<a){
            if(check==0){
                for(int i=0;i<a;i++){
                    cout << mt[row][i] << " " ;
                }
                check = 1;
                row++;
            }else{
                for(int i=a-1;i>=0;i--){
                    cout << mt[row][i] << " " ;
                }
                check = 0;
                row++;
            }
        }
        cout << endl;
    }
}