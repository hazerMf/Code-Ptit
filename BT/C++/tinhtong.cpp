#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream datain("DATA.in");
    ofstream dataout("DATA.out");

    long long sum=0;
    string num;
    while(datain >> num){
        int flag=0;
        for(int i=0;i<num.length();i++){
            if(!isdigit(num[i])){
                flag = 1;
                break;
            }
        }
        if(flag == 1) continue ;
        else{
            if(num.length()<11){
                long long a;
                a = stoi(num);
                if(a<=INT_MAX&&a>=INT_MIN){
                    sum += a;
                }
            }
        }
    }

    dataout << sum;
    datain.close();
    dataout.close();
}
