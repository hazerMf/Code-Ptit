#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string quiz101 = "ABBADCCABDCCABD";
    string quiz102 = "ACCABCDDBBCDDBB";
    int runs;
    cin >> runs;
    while(runs--){
        int ma;
        cin >> ma;
        float diem = 0;
        float dung = 10.00/15;
        if(ma==101){
            for(int i=0;i<15;i++){
                char temp;
                cin >> temp;
                if(temp==quiz101[i]){
                    diem += dung;
                }
            }
        }else{
            for(int i=0;i<15;i++){
                char temp;
                cin >> temp;
                if(temp==quiz102[i]){
                    diem += dung;
                }
            }
        }
        cout << fixed << setprecision(2) << diem << endl;   
    }
}