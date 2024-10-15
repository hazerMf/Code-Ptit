#include<bits/stdc++.h>
using namespace std;

void backtracking(int size,int a,int b,string s,vector<vector<int>> &map,vector<string> &sav){
    if(a==size-1&&b==size-1){
        sav.push_back(s);
    }else{
        if(a+1<size&&map[a+1][b]==1&&s[s.size()-1]!='D'){
            backtracking(size,a+1,b,s + "D",map,sav);
        }else if(a-1>=0&&map[a-1][b]==1&&s[s.size()-1]!='U'){
            backtracking(size,a-1,b,s + "U",map,sav);
        }
        if(b+1<size&&map[a][b+1]==1&&s[s.size()-1]!='R'){
            backtracking(size,a,b+1,s + "R",map,sav);
        }else if(b-1>=0&&map[a][b-1]==1&&s[s.size()-1]!='L'){
            backtracking(size,a,b-1,s + "L",map,sav);
        }
    }
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int size;
        cin >> size;
        vector<vector<int>> map(size,vector<int>(size,0));
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cin >> map[i][j];
            }
        }
        vector<string> sav;
        string s = "";
        backtracking(size,0,0,s,map,sav);
        if(sav.empty()){
            cout << -1;
        }else{
            for(auto i:sav){
                cout << i << " ";
            }
        }
        
        cout << endl;
    }
}