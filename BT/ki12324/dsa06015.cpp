#include<bits/stdc++.h>
using namespace std;

void merge(int list[],int l,int m,int r){
    vector<int> x(list+l,list+m+1);
    vector<int> y(list+m+1,list+r+1);
    int i=0,j=0;
    while(i<x.size()&&j<y.size()){
        if(x[i]<=y[j]){
            list[l]=x[i];
            i++;
            l++;
        }else{
            list[l]=y[j];
            j++;
            l++;
        }
    }
    while(i<x.size()){
        list[l]=x[i];
        i++;
        l++;
    }
    while(j<y.size()){
        list[l]=y[j];
        j++;
        l++;
    }
}

void mergesort(int list[],int l,int r){
    if(l>=r) return;
    int m = (l+r)/2;
    mergesort(list,l,m);
    mergesort(list,m+1,r);
    merge(list,l,m,r);
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int sz;
        cin >> sz;
        int list[sz];
        for(int i=0;i<sz;i++){
            cin >> list[i];
        }
        mergesort(list,0,sz-1);
        for(int i=0;i<sz;i++){
            cout << list[i] << " ";
        }
        cout << endl;
    }
}