#include<bits/stdc++.h>
using namespace std;

void backtracking(int h,int w,int a,int b,string s,vector<vector<int>> &map,vector<string> &sav){
    if(a==h-1&&b==w-1){
        sav.push_back(s);
    }else{
        if(a+1<h){
            backtracking(h,w,a+1,b,s + "D",map,sav);
        }
        if(b+1<w){
            backtracking(h,w,a,b+1,s + "R",map,sav);
        }
    }
}

/*
void backtracking(int size,int a,int b,string s,vector<vector<int>> &map,vector<string> &sav){
    int len = (size - 1)*2;
    if(a == size - 1 && b == size - 1){
        sav.push_back(s);
    }else{
        if(a>=size||b>=size) return;
        if(map[a][b]==0) return;
        backtracking(size,a+1,b,s + "D",map,sav);
        backtracking(size,a,b+1,s + "R",map,sav);
    }
}
*/

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int h,w;
        cin >> h >> w;
        vector<vector<int>> map(h,vector<int>(w,0));
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin >> map[i][j];
            }
        }
        vector<string> sav;
        string s = "";
        backtracking(h,w,0,0,s,map,sav);
        if(sav.empty()){
            cout << 0;
        }else{
            cout << sav.size();
        }
        
        cout << endl;
    }
}