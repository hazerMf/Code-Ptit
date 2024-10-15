#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len,max;
        cin >> len >> max;
        int list[len];
        for(int i=0;i<len;i++){
            cin >> list[i];
        }
        sort(list,list+len);
        int dem=0;
        int check =1;
        for(int i=0;i<len;i++){
            if(check==0) break;
            if(list[i]>=max){
                dem+=len-1;
                i++;
            }
            for(int j=i+1;j<len;j++){
                int cal = list[len-1-i]+list[len-1-j];
                if(cal<max){
                    check =0;
                    break;
                }
                if(cal>=max){
                    dem++;
                }else{
                    break;
                }
                
            }
        }
        cout << dem << endl;
    }
}