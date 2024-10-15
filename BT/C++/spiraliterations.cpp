#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int a,b,c;
        cin >> a >> b >> c;
        int mt[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin >> mt[i][j];
            }
        }
        int count = 0;
        int top=0,bot=b-1,left=0,right=a-1;
        int time = 0,pos;
        while(count!=c){
            if(time==0){
                for(int i=left;i<right;i++){
                    count++;
                    if(count==c){
                        pos=i;
                        break;
                    }
                }
                top++;
                time++;
            }else if(time==1){
                for(int i=top;i<right;i++){
                    count++;
                    if(count==c){
                        pos=i;
                        break;
                        
                    }
                }
                right--;
                time++;
            }else if(time==2){
                for(int i=right;i>left;i--){
                    count++;
                    if(count==c){
                        pos=i;
                        break;
                        
                    }
                }
                bot--;
                time++;
            }else{
                for(int i=bot;i>top;i--){
                    count++;
                    if(count==c){
                        pos=i;
                        break;
                        
                    }
                }
                left++;
                time=0;
            }
        }
        if(time==0) cout << mt[pos+left][top];
        else if(time==1) cout << mt[pos+top][right];
        else if(time==2) cout << mt[pos+right][bot];
        else cout << mt[pos+bot][left];
    }
}