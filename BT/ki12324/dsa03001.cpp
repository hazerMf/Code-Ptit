#include<bits/stdc++.h>
using namespace std;

void dem(int tien){
    int dem=0;
    int list[10]={1,2,5,10,20,50,100,200,500,1000};
    for(int i=9;tien!=0;i--){
        if(list[i]>tien){
            continue;
        }else{
            while(tien>=list[i]){
                tien-=list[i];
                dem++;
            }
        }
    }
    cout << dem << endl;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int tien;
        cin >> tien;
        dem(tien);
    }
}