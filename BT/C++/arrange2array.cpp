#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int lena,lenb;
        cin >> lena >> lenb;
        int a1[lena],a2[lenb];
        for(int i=0;i<lena;i++){
            cin >> a1[i];
        }
        for(int i=0;i<lenb;i++){
            cin >> a2[i];
        }
        for(int i=0;i<lenb;i++){
            for(int j=0;j<lena;j++){
                if(a1[j]==a2[i]){
                    cout << a1[j] << " ";
                    a1[j] = 0;
                }
            }
        }
        for(int i=0;i<lena;i++){
            for(int j =i+1;j<lena;j++){
                    if(a1[i]>a1[j]){
                        int temp = a1[i];
                        a1[i]=a1[j];
                        a1[j] = temp;
                    }
                }
            if(a1[i]!=0){
                
                cout << a1[i] << " ";
            }
        }
        cout << endl;
    }
}