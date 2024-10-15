#include<bits/stdc++.h>
using namespace std;

int find(int list[],int l,int r,int x){
    if(r>=l){
        int mid=(l+r)/2;
        if(list[mid]==x) return mid;
        if(list[mid]>x) return find(list,l,mid-1,x);
        return find(list,mid+1,r,x);
    }
    return -1;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int size,x;
        cin >> size >> x;
        int list[size];
        for(int i=0;i<size;i++){
            cin >> list[i];
        }
        int a = find(list,0,size-1,x);
        if(a!=-1){
            cout << a+1 << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}