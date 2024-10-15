#include<bits/stdc++.h>

using namespace std;

string sol(string str){
    int len = str.length();
    int index = -1;
    for(int i=len-2;i>=0;i--){
        if(str[i]>str[i+1]){
            index = i;
            break;
        }
    }
    int t=-1;
    for(int i=len-1;i>index;i--){
        if(str[i]<str[index]){
            if(t==-1){
                t=i;
            }else if(str[i]>=str[t]){
                t=i;
            }
        }
    }
    if(index==-1){
        return"-1";
    }
    if(index==0&&str[t]=='0'){
        return "-1";
    }
    if(t!=-1){
        swap(str[index],str[t]);
        return str;
    }
    return "-1";
}

int main(){
    int runs;
    string str;
    cin >> runs;
    while(runs--){
        cin >> str;
        cout << sol(str) << endl;
    }
} 