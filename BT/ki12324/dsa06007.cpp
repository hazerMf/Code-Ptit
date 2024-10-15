#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int size;
        cin >> size;
        int list[size];
        for(int i=0;i<size;i++){
            cin >> list[i];
        }
        int sortedlist[size];
        for(int i=0;i<size;i++){
            sortedlist[i]=list[i];
        }
        sort(sortedlist,sortedlist+size);
        int chk=0;
        int l=0,r=0;
        for(int i=0;i<size;i++){
            if(sortedlist[i]!=list[i]){
                l=i;
                break;
            }
        }
        for(int i=size-1;i>l;i--){
            if(sortedlist[i]!=list[i]){
                r=i;
                break;
            }
        }
        cout << l+1 << " " << r+1 << endl;
    }
}