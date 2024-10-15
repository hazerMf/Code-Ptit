#include <iostream>
#include <string>
#include <iomanip>
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
        for(int i=0;i<size;i++){
            if(i==0||i==size-1){
                for(int j=0;j<size;j++){
                    cout << mt[i][j] << " ";
                }
            }else{
                for(int j=0;j<size;j++){
                    if(j==0||j==size-1){
                        cout << mt[i][j] << " ";
                    }
                    else{
                        cout << " " << " ";
                    }
                }
            }
            cout << endl;
        }

    }
}